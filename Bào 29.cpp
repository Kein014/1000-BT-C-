#include <iostream>
using namespace std;

int main()
{
	int n;
	int max = 0;

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

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (i % 2 != 0)
			{
				if (max < i)
				{
					max = i;
				}
			}
		}
	}

	cout << max;
	return 0;
}