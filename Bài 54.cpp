#include <iostream>
using namespace std;

int MiniumNumber(int n)
{
	int min = 10;
	while (n > 0)
	{
		int num = n % 10;
		if (min > num)
		{
			min = num;
		}
		n /= 10;
	}
	return min;
}
int CountMinNum(int n, int min)
{
	int count = 0;
	while (n > 0)
	{
		int num = n % 10;
		if (num == min)
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
			cout << "n phai lon hon hoac bang 10! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 10);

	int max = MiniumNumber(n);
	cout << CountMinNum(n, max);
}
