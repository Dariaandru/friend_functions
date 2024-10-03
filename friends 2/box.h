#pragma once
using namespace std;
#include <string>
#include <vector>

class Author;

class Book
{
    private:
        string name;
        int year;
        string author;
        string genre;
        int pages;
    public:
        Book(string name, int year, string genre, int pages);
        void Print();

    friend Author;
};


class Author
{
    private:
        string name;
        string surname;
        string patromymic;
        vector <Book> books;

    public:
        Author(string, string, string);
        void Write(Book& );
        void PrintName();
        void UpdateBookData(Book& , string, string);
        void UpdateBookData(Book& , string, int);

        void PrintAllBooks();

        friend Book;
        
};