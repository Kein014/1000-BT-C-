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
			cout << "n phai lon hon hoac bang 1! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 1);

	int Sum = 0;
	int x = 2;
	for (int i = 1; i <= n; i++)
	{
		Sum += pow(-1, i) * pow(x, 2 * i);
	}
	cout << "Tong la: " << Sum << endl;
	return 0;
}