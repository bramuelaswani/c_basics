#include <iostream>
using namespace std;
int x = 20;

int main()
{
    int x = 50;
    cout << x;
    cout << ::x; // goes for global

    return 0;
}