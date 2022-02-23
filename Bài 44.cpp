#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 0;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "n phai lon hon hoac bang 0. Xin nhap lai!";
			cin >> n;
		}
	} while (n < 0);

	int temp = n;

	if (n == 0)
		sum = 0;
	int num;
	while (temp != 0)
	{
		num = temp % 10;
		sum += num;
		temp /= 10;
	}

	cout << "Tong la: " << sum;
}
	
