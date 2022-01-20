#include <iostream>
using namespace std;
class Book
{
public:
    string title;
    string author;
    int pages;
    Book(string aTitle, string aAuthor, int aPages)
    {
        title = aTitle;
        author = aAuthor;
        pages = aPages;
    }
};

int main()
{
    Book book1("Harry Poter", "Jk Rowlene", 500);
    Book book1("Harry Poter", "Jk Rowlene", 500);

    Book book2("james milner", "kevin Eims", 700);

    cout << book1.pages << endl;
    cout << book2.title;

    return 0;
}