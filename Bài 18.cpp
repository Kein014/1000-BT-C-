#include <iostream>
using namespace std;

double Exponential(int var)
{
	var *= 2;
	double result = 1;
	for (int i = 1; i <= var; i++)
	{
		result *= i;
	}
	return result;
}

double Power_n(int var, int n)
{
	n *= 2;
	double result = 1;
	while (n--)
	{
		result *= var;
	}
	return result;
}

int main()
{
	int n;
	float S = 1;
	int x = 2;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		S += (float)Power_n(x, i) / Exponential(i);
	}
	cout << "Tong la: " << S;
	return 0;
}

