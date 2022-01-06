#include <iostream>
using namespace std;
int GetMax(int num1, int num2)
{
    int result;
    if (num1 > num2)
    {
        result = num1;
    }
    else
    {
        result = num2;
    }
    return result;
};
int main()
{
    cout << GetMax(10, 15);
    return 0;
}