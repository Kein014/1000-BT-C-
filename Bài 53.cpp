#include <iostream>
using namespace std;

int MaximumNumber(int n)
{
	int max = -1;
	while (n > 0)
	{
		int num = n % 10;
		if (max < num)
		{
			max = num;
		}
		n /= 10;
	}
	return max;
}
int CountMaxNum(int n, int max)
{
	int count = 0;
	while (n > 0)
	{
		int num = n % 10;
		if (num == max)
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

	int max = MaximumNumber(n);
	cout << CountMaxNum(n, max);
	
}
