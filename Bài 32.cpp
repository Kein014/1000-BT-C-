#include <iostream>
using namespace std;

bool KTSoChinhPhuong(int n)
{
	/*Số chính phương là số mà kết quả khai căn bậc 2 là 1 số nguyên
	sqrt(4) = 2.00000 => ép về nguyên = 2 => vì 2.000  == 2 (true) => là số chính phương
	sqrt(5) = 2.23234 => ép về nguyên = 2 => vì 2.4324 != 2 (false) => không là số chính phương*/
	if (sqrt((float)n) == (int)sqrt((float)n)) // So sánh 2 số khi chưa ép về kiểu nguyên và số đã ép về kiểu nguyên
		return true;
	else return false;
}

int main()
{
	int n;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "n phai lon hon 0! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 0);

	if (KTSoChinhPhuong(n) == true)
		cout << "La so chinh phuong.";
	else cout << "Khong la so chinh phuong.";
}