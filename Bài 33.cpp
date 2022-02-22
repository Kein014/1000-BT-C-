#include <iostream>
using namespace std;

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
		sum = sqrt(sum + 2);

	cout << "Tong la: " << sum;
}