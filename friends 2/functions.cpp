#include "box.h"
#include <iostream>
using namespace std;

Book::Book(string name, int year, string genre, int pages)
{
    this->name = name;
    this->year = year;
    this->genre = genre;
    this->pages = pages;
}

void Book::Print()
{
    cout << "name: " << this->name << endl;
    cout << "author: " << this->author << endl;
    cout << "genre: " << this->genre << endl;
    cout << "pages: " << this->pages << endl;
    cout << "year: " << this->year << endl << endl;
}


Author::Author(string a, string b, string c)
{
    this->name = a;
    this->surname = b;
    this->patromymic = c;
}

void Author::Write(Book& book)
{
    book.author = this->name + " " + this->surname+ " " + this->patromymic;
    books.push_back(book);
}

void Author::PrintName()
{
    cout << this->name + " " + this->surname+ " " + this->patromymic << endl;
}


void Author::PrintAllBooks()
{
    this->PrintName();
    for (Book b : books)
    {
        b.Print();
    }
}


void Author::UpdateBookData(Book& book, string param, string str)
{
    bool InList = false;
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].name == book.name)
        {
            if (param == "name")
                books[i].name = str;
            if (param == "genre")
                books[i].genre = str;
            InList = true;
        }

    }

    if (InList)
    {
        // book.name = name;
        cout << "Book updated" << endl << endl;
    }
    else
    {
        cout << "This is book is not yours" << endl;
    }
}


void Author::UpdateBookData(Book& book, string param, int num)
{
    bool InList = false;
    for (int i = 0; i < books.size(); i++)
    {
        if (books[i].name == book.name)
        {
            if (param == "year")
                books[i].year = num;
            if (param == "pages")
                books[i].pages = num;
            InList = true;
        }

    }

    if (InList)
    {
        cout << "Book updated" << endl << endl;
    }
    else
    {
        cout << "This is book is not yours" << endl;
    }
}