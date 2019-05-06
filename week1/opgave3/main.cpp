#include <iostream>
#include "book.hpp"

using namespace std;

int main(int argc, char **argv){
    cout << "Creating a book..." << endl << endl;

    //Create a book about Justin Bieber
    book book_test = {"Justin Bieber", "A cool story about an artist who helps everyone remember my name", "How to remember a name"};
    book book_test2 = {"author", "text", "title"};

    book_test.print();

    cout << endl;

}