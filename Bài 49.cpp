#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[100];
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

	int count = 0;
	int temp = n;
	if (temp == 0)
	{
		cout << temp;
		return 0;
	}
	int i = 0;
	while (temp != 0)
	{
		int num = temp % 10;
		arr[i] = num;
		i++;
		count++;
		temp /= 10;
	}
	cout << arr[count-1];
	return 0;
}