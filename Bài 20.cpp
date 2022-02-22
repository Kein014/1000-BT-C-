#include <iostream>
using namespace std;

int main()
{
	int n;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai ";
			cin >> n;
		}
	} while (n < 1);

	cout << "Cac uoc so: " << endl;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << "    ";
		}
	}

	return 0;
}

