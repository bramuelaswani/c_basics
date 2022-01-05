#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int luckyNums[] = {4, 6, 5, 7, 34, 65};
    cout << luckyNums[0] << endl;

    luckyNums[0] = 19;
    cout << luckyNums[0];
    return 0;
}