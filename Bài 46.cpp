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

	int temp = n;
	int count = 0;
	if (temp == 0)
		count = 0;
	while (temp != 0)
	{
		int num = temp % 10;
		if (num % 2 != 0)
			count++;
		temp /= 10;
	}

	cout << "So luong: " << count;
}