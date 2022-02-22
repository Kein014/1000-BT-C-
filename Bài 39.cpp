#include <iostream>
using namespace std;

int Exponential(int n)
{
	int kt = n;
	for (int i = n - 1; i > 0; i--)
	{
		kt *= i;
	}
	return kt;
}

int main()
{
	int n;
	float sum = 1;
 
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

	for (int i = 2; i <= n; i++)
	{

		sum = pow((Exponential(i) + sum) * 1.0, 1.0 / (i + 1));
	}

	cout << "Tong la: " << sum;
}
