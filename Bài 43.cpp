#include <iostream>

using namespace std;

int main()
{
	long long n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "n phai lon hon hoac bang 0! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 0);
	

	int count = 0;
	long long point = n;
	if (n == 0)
		count++;
	while (point != 0)
	{
		count++;
		point /= 10;
	}

	long long temp = n;
	cout << temp << endl;
	for (int i = 1; i < count - 1; i++)
	{
		temp /= 10;
		cout << temp << endl;
	}
	if (temp == 0)
		count++;
	cout << "So luong: " << count;
}

// muốn đếm kiểu dữ liệu có nhiều số: long long