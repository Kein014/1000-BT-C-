#include <iostream>
using namespace std;

int main()
{
	int n;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 2)
		{
			cout << "n phai lon hon hoac bang 2! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 2);

	float sum = pow(2.0, 1.0 / 2);
	for (int i = 3; i <= n; i++)
	{
		sum = pow((i + sum) * 1.0, 1.0 / i);
	}

	cout << "Tong la: " << sum;
}