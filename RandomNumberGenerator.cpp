#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{
    // srand(45);//seed
    srand(time(0)); // every second the value changes
    for (int x = 1; x < 25; x++)
    {
        cout << 1 + (rand() % 6) << endl;
    }
    return 0;
}
