#include <iostream>
using namespace std;

int FirstNumber(int n)
{
	int first;
	while (n > 0)
	{
		first = n % 10;
		n /= 10;
	}
	return first;
}
int CountIdentifyNumber(int n, int a)
{
	int count = 0;
	while (n > 0)
	{
		int num = n % 10;
		if (num == a)
		{
			count++;
		}
		n /= 10;
	}
	return count;
}

int main()
{
	int n;
	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 10)
		{
			cout << " n phai lon hon hoac bang 10! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 10);
	int num = FirstNumber(n);
	cout << CountIdentifyNumber(n, num);
}