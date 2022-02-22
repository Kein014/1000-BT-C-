#include <iostream>
using namespace std;

int main()
{
	int n;
	int product = 1;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1! Xin nhap lai!";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			if (i % 2 != 0)
				product *= i;

	cout << "Tich la: " << product;
	return 0;
}
