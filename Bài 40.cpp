#include <iostream>
using namespace std;

int main()
{
	int n;
	float sum = 0;
	int x = 2;
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
		sum = sqrt(sum + pow(x, i));
	}

	cout << "Tong la: " << sum;
}