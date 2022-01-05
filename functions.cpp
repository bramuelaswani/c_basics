#include <iostream>
using namespace std;

void sayHi(string name, int age)
{
    cout << "Hello" << name << "You are" << age << endl;
}
int main()
{
    sayHi("Bramuel", 58);
    sayHi("Tom", 8);
    sayHi("kevin", 20);

    return 0;
}