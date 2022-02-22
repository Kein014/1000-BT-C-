#include <iostream>

using namespace std;

double Power_n(double x, long n)
{
	double result = 1;
	while (n--)
	{
		result *= x;
	}
	return result;
}

double qPower_n(double x, long n)
{
	double result = 1;
	while (n)
	{
		cout << "-----------" << endl;
		cout << "n: " << n << endl;
		if (n % 2 == 1)
		{
			cout << "Dk dung" << endl;
			result *= x;
			cout << "kq: " << result << endl;
		}
		cout << "x1: " << x << endl;
		x *= x;
		cout << "x2: " << x << endl;
		cout << "n1: " << n << endl;
		n /= 2;
		cout << "n2: " << n << endl;
	}
	return result;
}

int main()
{
	double x = 4;
	long n = 3;
	double z;
	z = qPower_n(x, n);
 //có thể dùng hàm Power_n hoặc qPower_n
	cout << "ket qua la: " << z;
	/*cout << 2 / 2;*/
	return 0;
}
