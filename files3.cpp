#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream buckFile("beefjerky.txt"); // delete beefjerky.txt and try
    if (buckFile.is_open())
    {
        cout << "Okay the file is open" << endl;
    }
    else
    {
        cout << "bucky you didnt associate the file" << endl;
    }
    buckFile << "I love beef";
    buckFile.close();

    return 0;
}