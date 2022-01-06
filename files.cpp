#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream buckFile;
    buckFile.open("tuna.txt");
    buckFile << "I love tuna and tuna loves me n/";
    buckFile.close();

    return 0;
}