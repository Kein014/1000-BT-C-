#include <iostream>
using namespace std;

int main()
{
	int n;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 2)
		{
			cout << "n phai lon hon hoac bang 2! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 2);
	
	int i = 1;
	int sum = 0;
	while (i <= n)
	{
		sum += i;
		if (sum < n)
		{
			i++;
		}
		else
		{
			i--;
			cout << i;
			break;
		}
	}
	return 0;
}