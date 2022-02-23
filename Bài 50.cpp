#include <iostream>
using namespace std;

int main()
{
	int arr[100];
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

	int temp = n;
	int i = 0;
	while (temp != 0)
	{
		int num = temp % 10;
		arr[i] = num;
		i++;
		temp /= 10;
	}

	for (int j = 0; j <= i-1; j++)
	{
		cout << arr[j];
	}
	return 0;
}