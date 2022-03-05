#include <iostream>
using namespace std;

bool CheckDecreasementNumber(int n)
{
	int temp = n;
	int check = temp % 10;
	temp /= 10;
	while (temp > 0)
	{
		int num = temp % 10;
		if (num < check)
			return false;
		temp /= 10;
	}
	return true;
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
	if (CheckDecreasementNumber(n) == true)
		cout << "Dung";
	else
		cout << "Sai";
	return 0;
}