#include <iostream>
using namespace std;

int main()
{
	int n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "n phai lon hon hoac bang 1! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 0);

	float Sum = 0;
	int x = 2;
	for (int i = 0; i <= n; i++)
	{
		Sum += pow(-1, i) * pow(x,2*i+1);
	}
	cout << "Tong la: " << Sum;
	return 0;
}