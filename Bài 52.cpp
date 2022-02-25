#include <iostream>
using namespace std;

int main()
{
	int n;
	int min = 10;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 10)
		{
			cout << "n phai lon hon hoac bang 10! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 10);

	int temp = n;
	while (temp > 0)
	{
		int num = temp % 10;
		if (num < min)
		{
			min = num;
		}
		temp /= 10;
	}
	cout << min;
}