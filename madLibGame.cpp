#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    string color, pluralnoun, celebrity;
    cout << "Enter the color";
    getline(cin, color);
    cout << "Enter the pluralnoun";
    getline(cin, pluralnoun);
    cout << "Enter the celebrity";
    getline(cin, celebrity);

    cout << "roses are" << color << endl;
    cout << pluralnoun << "are blue" << endl;
    cout << "I love" << celebrity << endl;

    return 0;
}