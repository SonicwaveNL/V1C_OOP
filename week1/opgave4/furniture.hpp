#ifndef FURNITURE_HPP
#define FURNITURE_HPP

#include <iostream>
#include <string>

using namespace std;

//Table
class table {
private:
   int n_legs;
   int length;
   int width;

   void print_table();

public:

   table(
      const int & n_legs,
      const int & length,
      const int & width
   ):
      n_legs( n_legs ),
      length( length ),
      width( width )
   {}

   void print();
   void add_legs();

};

//Stool
class stool {
private:
   int n_legs;
   int n_seats;

   void print_stool();

public:

   stool(
      const int & n_legs,
      const int & n_seats
   ):
      n_legs( n_legs ),
      n_seats( n_seats )
   {}

   void print();
   void remove_legs();

};

//Furniture
class furniture {
private:
   table table1 = {4, 30, 30};
   stool stool1 = {4,1};
   stool stool2 = {4,1};
   stool stool3 = {4,1};
   stool stool4 = {4,1};

   void print_furniture();

public:

   void print();
   void makeMoreHipster();

};

#endif