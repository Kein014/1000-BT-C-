#include <iostream>
using namespace std;

bool EvenNumber(int n)
{
	while (n > 0)
	{
		int num = n % 10;
		if (num % 2 != 0)
		{
			return false;
		}
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
		if (n < 0)
		{
			cout << "n phai lon hon hoac bang 0! Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 0);

	if (EvenNumber(n) == true)
		cout << "Dung";
	else
		cout << "Sai";
}
