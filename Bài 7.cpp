#include <iostream>

using namespace std;

int main()
{
	int n;
	float S = 0;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n <= 0)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai:";
			cin >> n;
		}
	} while (n <= 0);

	for (float i = 1; i <= n; i++)
	{
		S += i / (i + 1);
	}

	cout << "Tong la: " << S;

	return 0;
}
