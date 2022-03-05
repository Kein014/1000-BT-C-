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

	float Sum = 0;
	int x = 2;
	int Count = 0;
	for (int i = 1; i <= n; i++)
	{
		Count += i;
		Sum += pow(-1, i+1) * (float) 1 / Count;
	}
	cout << "Tong la: " << Sum;
	return 0;
}