#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << 40;
    cout << 5 + 7;
    cout << 10 % 3;
    int wnum = 5;
    double dnum = 5.6;
    wnum++;

    cout << wnum;
    wnum += 5;
    cout << wnum;
    cout << 5.5 + 9;
    cout << 10 / 3;
    cout << 10.0 / 3.0;

    cout << pow(2, 5);
    cout << sqrt(36);
    cout << round(4.4);
    cout << round(4.6);
    cout << ceil(4.2);
    cout << floor(4.9);
    cout << fmax(6, 10);
    cout << fmin(5, 8);

    return 0;
}