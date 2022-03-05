#include <iostream>
using namespace std;

float Inequation(float a, float b)
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
	return x;
}

int main()
{
	float a = 10;
	float b = -5;
	cout << Inequation(a, b);
}