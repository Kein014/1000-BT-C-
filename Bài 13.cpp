#include <iostream>
using namespace std;

double Power_n(double x, long n)
{
	n *= 2;
	double result = 1;
	while (n--)
	{
		result *= x;
	}
	return result;
}

int main()
{
	// Cách 1

	int x = 2;
	double S = 0;
	int n;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai!";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		S += Power_n(x, i);
	}

	cout << "Tong la: " << S;

	//Cách 2
	/*
	int i, n;
	float x, T, S;
	i = 1;
	T = 1;
	S = 0;
	printf("\nNhap x: ");
	scanf("%f", &x);

	printf("\nNhap n: ");
	scanf("%d", &n);

	while (i <= n)
	{
		//T = T * x * x;
		T = pow(x, (2 * i));
		S = S + T;
		i++;
	}
	printf("\nTong la %f", S);
	*/
	return 0;
}