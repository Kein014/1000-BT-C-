#include <iostream>
using namespace std;

int main()
{
	int n;
	int sum = 1;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1! Nhap lai: ";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			sum *= i;
		}
	}

	cout << "Tong la: " << sum;
	return 0;
}