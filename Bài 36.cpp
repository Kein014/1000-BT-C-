#include <iostream>
using namespace std;

double Exponential(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

int main()
{
	int n;
	float sum = 0;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		sum = sqrt(sum + Exponential(i));
	}

	cout << "Tong la: " << sum;
}