#include <iostream>

using namespace std;

int dividant(int n)
{
	int result = 0;
	for (int i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;
}

int main()
{
	//Cách 1

	int n;
	float S = 0;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai:";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		S += 1.0 / dividant(i);
	}

	cout << "Tong la: " << S;

	//Cách 2
	/*
	int i, n;
	float S, T;
	i = 1;
	S = 0;
	T = 0;
	do
	{
		printf("\nNhap n: ");
		scanf("%d", &n);
		if (n < 1)
		{
			printf("\nN phai >= 1. Xin Nhap lai!");
		}
	} while (n < 1);

	while (i <= n)
	{
		T = T + i;
		S = S + 1.0 / T;
		i++;
	}
	printf("\nTong la %f", S);
	*/
	return 0;
}
	