#include <iostream>

using namespace std;

int main()
{
	int n;
	float s;

	s = 0;

	cout << "nhap n: ";
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
		s = s + 1.0 / i;
	}

	cout << "tong la: " << s;

	return 0;
}

