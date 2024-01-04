#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int yearPublished;
    std::string isbn;

public:
    Book(std::string bookTitle, std::string bookAuthor, int bookYearPublished, std::string bookISBN) {
        title = bookTitle;
        author = bookAuthor;
        yearPublished = bookYearPublished;
        isbn = bookISBN;
    }
    void displayDetails() {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Author: " << author << std::endl;
        std::cout << "Year Published: " << yearPublished << std::endl;
        std::cout << "ISBN: " << isbn << std::endl;
    }
};

int main() {
    Book book1("The Catcher in the Rye", "J.D. Salinger", 1951, "9780316769488");
    book1.displayDetails();

    return 0;
}

