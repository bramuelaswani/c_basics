// functions with same name but different datatypes
#include <iostream>
using namespace std;
void printNumber(int x)
{
    cout << "iam printing out an integer" << x << endl;
}
void printNumber(float x)
{
    cout << "now iam printing out a float" << x << endl;
}
int main()
{
    int a = 54;
    float b = 32.4546;

    printNumber(a);
    printNumber(b);

    return 0;
}