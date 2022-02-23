#include <iostream>
using namespace std;

int main()
{
	int n;
	float sum = 1;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "n phai lon hon hoac bang 1! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 0);

	for (int i = 1; i <= n; i++)
	{
		sum = 1.0 / (1.0 + sum);
	}

	cout << "Tong la: " << sum;
}