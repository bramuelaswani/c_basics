#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int pages;
};

int main()
{
    Book book1;
    book1.title = "Harry potter";
    book1.author = "Jk rowlene";
    book1.pages = 500;

    Book book2;
    book2.title = "James Milner";
    book2.author = "kevin Eims";
    book2.pages = 700;
    book2.title = "Hunger games";

    cout << book1.pages << endl;
    cout << book2.title;

    return 0;
}