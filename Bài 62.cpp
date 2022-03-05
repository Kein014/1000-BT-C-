#include <iostream>
using namespace std;

int CheckMaxDivisor1(int a, int b)
{
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (a != b) {
        if (a > b) {
            a -= b; // a = a - b
        }
        else {
            b -= a;
        }
    }
    return a;
}
int CheckMaxDivisor2(int a, int b)
{
    while (a * b != 0) {
        if (a > b) {
            a %= b; // a = a % b
        }
        else {
            b %= a;
        }
    }
    return a + b;
}
int CheckMaxDivisor3(int a, int b)
{
    if (b == 0) return a;
    return CheckMaxDivisor3(b, a % b);
}
int main()
{
    int a = 10;
    int b = 8;
    cout << CheckMaxDivisor3(a, b);
}