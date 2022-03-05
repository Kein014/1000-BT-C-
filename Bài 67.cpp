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
			cout << "n phai lon hon hoac bang 0! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 0);
	
	int Sum = 0;
	int x = 2;
	for (int i = 0; i <= n; i++)
	{
		Sum = Sum + pow(-1, i + 1) * pow(x, i);
	}
	cout << "Sum = " << Sum;
	return 0;
}