#include <iostream>

using namespace std;

int main()
{
	int i, n;
	long S;

	S = 0;
	i = 1;

	cout << "Nhap n: ";
	cin >> n;

	while (i <= n)
	{
		S = S + i * i;
		i++;
	}

	cout << "Tong = " << S;

	return 0;
}
