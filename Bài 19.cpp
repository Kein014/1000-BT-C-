#include <iostream>
using namespace std;

double Power_n(int x, int n)
{
	n = 2 * n + 1;
	double result = 1;
	while (n--)
	{
		result *= x;
	}
	return result;
}

double Exponentail(int n)
{
	n = 2 * n + 1;
	double result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main()
{
	int n;
	float S = 1;
	int x = 2;

	cout << "Nhap n: ";
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		S += (float)Power_n(x, i) / Exponentail(i);
	}

	cout << "Tong la: " << S;

	return 0;
}
