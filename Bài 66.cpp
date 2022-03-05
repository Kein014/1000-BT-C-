#include <iostream>
using namespace std;

float InequationDeg1(float a, float b)
{
	float x;
	if (a == 0)
	{
		x = -b;
	}
	else
	{
		x = -b / a;
	}
	return sqrt(x);
}
void InequationDeg2(float a, float b, float c)
{
	float x1, x2;
	if (a == 0)
	{
		x1 = x2 = InequationDeg1(b, c);
		cout << "Phuong trinh co 1 nghiem. " << endl;
		cout << "x =  " << sqrt(x1);
	}
	else
	{
		float Delta = b * b - 4 * a * c;
		if (Delta < 0)
		{
			cout << "Phuong trinh vo nghiem! Nghiem x vo gia tri." << endl;
			x1 = x2 = 0;
			cout << "x = 0";
		}
		else if (Delta == 0)
		{
			cout << "Phuong trinh co nghiem kep" << endl;
			x1 = x2 = -b / (2 * a);
			cout << "x1 = x2 = " << sqrt(x1);
		}
		else if (Delta > 0)
		{
			x1 = (-b + sqrt(Delta)) / (2 * a);
			x2 = (-b - sqrt(Delta)) / (2 * a);
			cout << "x1 = " << -sqrt(x1) << "hoac " << sqrt(x1) << endl;
			cout << "x2 = " << -sqrt(x2) << "hoac " << sqrt(x2)  << endl;
		}
	}
}

int main()
{
	int a = 0;
	int b = 4;
	int c = 2;
	InequationDeg2(a, b, c);
}