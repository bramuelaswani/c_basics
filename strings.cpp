#include <iostream>

using namespace std;
int main()
{
    cout << "giraafe academy /n";
    cout << "hello" << endl;

    string phrase = "girafe academy";
    cout << phrase;
    cout << phrase.length();
    cout << phrase[0];
    phrase[0] = 'B';
    cout << phrase;
    cout << phrase.find("academy", 0);
    cout << phrase.substr(8, 3);
    string phrasesub;
    phrasesub = phrase.substr(8, 3);
    cout << phrasesub;
    return 0;
}