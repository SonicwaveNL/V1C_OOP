#include <ostream>
#include "book.hpp"

using namespace std;

void book::print(){
   print_title();
   print_author();
   print_text();
}

void book::print_title(){
   cout << "\t" << "Title:  \t" << title << "\n";
}

void book::print_author(){
   cout << "\t" << "Author: \t" << author << "\n";
}

void book::print_text(){
   cout << "\t" << "Text:   \t" << text << "\n";
}