#include <iostream>
using namespace std;

bool KTSoNguyenTo(int n)
{
	if (n <= 1)
		return false;
	for (int i = 2; i < n; i++)
		if (n % i == 0)
			return false;
	return true;
};

int main()
{
	int n;
	
	cout << "Nhap n: ";
	cin >> n;

	if (KTSoNguyenTo(n) == true)
		cout << "La so nguyen to.";
	else cout << "Khong phai la so nguyen to.";
}
			