#include <iostream>

using namespace std;

int main()
{
	int n;
	float S = 0;

	cout << "Nhap n: ";
	cin >> n;

	while (n <= 0)
	{
		if (n <= 0)
		{
			cout << "n khong the be hon hoac bang 0 " << endl << "Vui long nhap lai !" << endl;
		}
		cout << "Nhap lai n: ";
		cin >> n;
	}

	for (int i = 1; i <= n; i++)
	{
		S = S + 1.0 / (2 * i);
	}

	cout << "Tong la: " << S;
	return 0;
}

