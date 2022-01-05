#include <iostream>
using namespace std;
int main()
{
    int age = 34;
    double gpa = 3.4;
    string name = "mike";

    cout << &age << endl; // physical memory address
    cout << "age:" << age << endl;
    return 0;
}