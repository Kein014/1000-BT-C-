#include <iostream>
using namespace std;

bool KTSoHoanHao(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0)
			sum += i;
	if (sum == n)
		return true;
	else return false;
}

int main()
{
	int n;
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

	if (KTSoHoanHao(n) == true)
		cout << "La so hoan hao.";
	else cout << "Khong phai la so hoan hao.";
	return 0;
}


