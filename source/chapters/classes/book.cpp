#include <iostream>

using namespace std;

class Book {
    public:
        string title;
        string author;
        int pages; 

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
    Book book1("Ngugi wa Thiong'o", "Things fall apart", 500);
    cout << book1.title << endl;

    Book book2("Harry Porter", "JK Rowling", 724);
    cout << book2.title << endl;


    return 0;
}
