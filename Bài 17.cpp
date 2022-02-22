#include <iostream>
using namespace std;

double Exponential(int n)
{
	int result = 1;
	for (int i = 1; i <= n; i++)
	{
		result *= i;
	}
	return result;
}
float Power_n(double x, long n)
{
	float result = 1;
	while (n--)
	{
		result *= x;
	}
	cout << "Power: " << result << endl;
	return result;
}

int main()
{
	//Cách 1
	int n;
	float S = 0;
	int x = 2;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 1)
		{
			cout << "n phai lon hon hoac bang 1. Xin nhap lai: ";
			cin >> n;
		}
	} while (n < 1);

	for (int i = 1; i <= n; i++)
	{
		S += Power_n(x, i) / Exponential(i);
	}
	
	cout << "Tong la: " << S;

	//Cách 2
	/*
	int i, n;
    float x, S, T;
    long M;
    printf("\nNhap x: ");
    scanf("%f", &x);
    do
    {
    printf("\nNhap n: ");
    scanf("%d", &n);
      if(n < 1)
      {
          printf("\n N phai >= 1. Xin nhap lai !");
      }

    }while(n < 1);

    S = 0;
    T = 1;
    M = 1;
    i = 1;

    while(i <= n)
    {
        T = T * x;
        M = M * i;
        S = S + T/M;
        i++;
    }
    printf("\nTong la %f", S);
    getch();
	*/
    return 0;

	return 0;
}
