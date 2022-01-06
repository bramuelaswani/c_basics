#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream buckFile("beefjerky.txt");
    buckFile << "I love beef";
    buckFile.close();

    return 0;
}