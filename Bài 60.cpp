#include <iostream>
using namespace std;

bool CheckIncreasionNumber(int n)
{
	int check = n % 10;
	n /= 10;
	while (n > 0)
	{
		int num = n % 10;
		if (num >= check)
		{
			return false;
		}
		check = num;
		n /= 10;
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

	if(CheckIncreasionNumber(n) == true)
		cout << "Dung";
	else
		cout << "Sai";
}