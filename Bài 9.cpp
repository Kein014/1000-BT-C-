#include <iostream>

using namespace std;

int main()
{
	int n, S = 1;

	do
	{
		cout << "Nhap n: ";
		cin >> n;

		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai !";
		}
	} while (n < 1);

	for (int i = 2; i <= n; i++)
	{
		S *= i;
	}

	cout << "Tich la: " << S;

	return 0;
}