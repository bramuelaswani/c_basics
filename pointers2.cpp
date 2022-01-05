#include <iostream>
using namespace std;
int main()
{
    int Age = 34;
    int *pAge = &Age;

    double gpa = 3.4;
    double *pgpa = &gpa;

    string name = "mike";
    string *pname = &name;

    cout << pAge << endl;
    cout << *pAge;
    cout << &gpa << endl;
    cout << *&gpa;
    return 0;
}