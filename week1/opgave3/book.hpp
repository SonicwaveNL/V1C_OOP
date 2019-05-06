#ifndef BOOK_HPP
#define BOOK_HPP 

#include <iostream>
#include <string>

using namespace std;

class book {   
private:
   string text;
   string author;
   string title;

   void print_text();
   void print_author();
   void print_title();
<
public:

   book( 
      const string & text, 
      const string & author, 
      const string & title 
   ):
      text( text ),
      author( author ),
      title( title )
   {}
   
   void print(); 
};

#endif // BOOK_HPP