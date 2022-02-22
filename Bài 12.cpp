#include <iostream>
 
using namespace std;

// hàm tính lũy thừa
double Power_n(double x, long n)
{
	double result = 1;
	while (n--)
	{
		result *= x;
	}
	return result;
};

int main()
{
	//cách 1

	int n;
	int x = 2, S = 0;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai !";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		S += Power_n(x, i);
	}
	cout << "Tong la: " << S;
	return 0;

	//Cách 2
	/*
	int i, n;
	float x, T, S;
	i = 1;
	T = 1;
	S = 0;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Nhap n: ";
	cin >> n;

	while (i <= n)
	{
		T = T * x;
		S = S + T;
		i++;
	}
	cout << "Tong la: " << S;
	*/
};




