#include <iostream>
using namespace std;

bool CheckSymmetricalNumber(int n)
{
	int temp = n;
	int check = 0;
	while (temp > 0)
	{
		int num = temp % 10;
		check = check*10 + num;
		temp /= 10;
		/*cout << "*" << check << endl;*/
	}
	if (check == n)
		return true;
	else
		return false;
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
	
	if (CheckSymmetricalNumber(n) == true)
		cout << "Dung";
	else
		cout << "Sai";

	return 0;
}