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

		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai !";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 0; int(i) <= n; i++)
	{
		S += (float)(2 * i + 1) / (2 * i + 2);
	}

	cout << "Tong la: " << S;

	return 0;
}