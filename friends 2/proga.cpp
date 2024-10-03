#include "box.h"
#include <iostream>
using namespace std;

int main()
{
    Book b1("abc", 2021, "poem", 50);
    Book b2("dda", 2019, "roman", 100);
    Book b3("fff", 2000, "drama", 30);
    Book b4("dhy", 2011, "novel", 90);

    Author a1("aaa", "bbb", "ccc");
    Author a2("nnn", "jjk", "ftftf");

    a1.Write(b1);
    a1.Write(b2);
    a2.Write(b3);
    a2.Write(b4);

    a1.PrintAllBooks();
    a2.PrintAllBooks();

    a1.UpdateBookData(b1, "year", 2024);

    a1.PrintAllBooks();

    a1.UpdateBookData(b2, "name", "narrfrfe");
    a1.UpdateBookData(b1,"pages", 200);


    a1.PrintAllBooks();
    a2.PrintAllBooks();


    a2.UpdateBookData(b3, "year", 2088);

    a2.PrintAllBooks();
    return 0;
}

