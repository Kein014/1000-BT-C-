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
		if(n<1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai !";
		}
	} while(n<1);
	for (int i = 0; i <= n; i++)
	{
		S += 1.0 / (2 * i + 1);
	}

	cout << "Tong la: " << S;
	return 0;
}