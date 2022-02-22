#include <iostream>
using namespace std;

double Power_n(double x, long n)
{
	double result = 1;
	n = 2 * n + 1;
	while (n--)
	{
		result *= x;
	}
	return result;
}

int main()
{
	//Cách 1

	int n;
	int x = 3;
	double S = 0;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "n phai lon hon hoac bang 0. Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 0);

	for (int i = 0; i <= n; i++)
	{
		S += Power_n(x, i);
	}

	cout << "Tong la: " << S;

	//Cách 2
	/*
	int i, n;
	float x, T, S;
	i = 0;
	T = 1;
	S = 0;
	printf("\nNhap x: ");
	scanf("%f", &x);

	printf("\nNhap n: ");
	scanf("%d", &n);

	while (i < n)
	{
		T = pow(x, (2 * i + 1));
		S = S + T;
		i++;
	}

	printf("\nTong la %f", S);
	*/
};