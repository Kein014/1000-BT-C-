#include <iostream>

using namespace std;

int main()
{
	int n;
	int S = 0, P = 1;

	do
	{
		cout << "Nhap n: ";
		cin >> n;

		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai!";
			cin >> n;
		}
	} while (n < 1);
	
	for (int i = 1; i <= n; i++)
	{
		P *= i;
		S += P;
	}
	cout << "Tong la: " << S;
		
	return 0;
}

