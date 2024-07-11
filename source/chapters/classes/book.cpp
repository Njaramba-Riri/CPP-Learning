#include <iostream>

using namespace std;

void setColor(int color){
    cout << "\033[1;" << color << "m";
};

class Book {
    public:
        string title{};
        string author{};
        int pages{}; 

        Book(){
            title = "No title";
            author = "No author";
            pages = 0;
        }

        Book(string aAuthor, string aTitle, int aPages){
            title = aTitle;
            author = aAuthor;
            pages = aPages;
        }   
};       

int main()
{
    setColor(36);
    Book book1("Ngugi wa Thiong'o", "Things fall apart", 500);
    cout << book1.title;
    cout << book1.author;
    cout << book1.pages << endl;

    setColor(32);
    Book book2("JK Rowling", "Harry Porter",  724);
    cout << book2.title << endl;

    setColor(39);

    return 0;
}
