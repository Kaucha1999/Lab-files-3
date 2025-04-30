#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string title;
    int pages;
    string author = "Peter";

protected:
    float price;

public:
    string publisher;

    void setTitle(string t) {
        title = t;
    }

    string getTitle() {
        return title;
    }

    void displayAuthorInfo() {
        cout << "Author: " << author << endl;
    }
};
int main() {
    Book myBook;

    myBook.setTitle("Peter's Diary");
    cout << "Title: " << myBook.getTitle() << endl;

    myBook.publisher = "Oxford University Press";
    cout << "Publisher: " << myBook.publisher << endl;

    myBook.displayAuthorInfo();

    return 0;
}
