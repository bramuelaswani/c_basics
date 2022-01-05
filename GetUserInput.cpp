#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age";
    cin >> age;

    cout << "your are" << age << "years old";

    string name;
    cout << "Enter your name";
    getline(cin, name);
    cout << "Hello" << name;

    return 0;
}