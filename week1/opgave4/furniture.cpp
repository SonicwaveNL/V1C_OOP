#include <iostream>
#include "furniture.hpp"

using namespace std;

//Table
void table::print_table(){
    cout << "Table:" << endl;
    cout << "\t" << "legs: " << n_legs << endl;
    cout << "\t" << "length: " << length << endl;
    cout << "\t" << "width: " << width << endl;

};

void table::print(){
    print_table();
};

void table::add_legs(){
    n_legs += 4;
};

//Stool
void stool::print_stool(){
    cout << "Stool" << endl;
    cout << "\t" << "legs: " << n_legs << endl;
    cout << "\t" << "seats: " << n_seats << endl;
};

void stool::print(){
    print_stool();
};

void stool::remove_legs(){
    n_legs -= 1;

};

//Furniture
void furniture::print_furniture(){
    table1.print();
    stool1.print();
    stool2.print();
    stool3.print();
    stool4.print();

};

void furniture::print(){
    print_furniture();
};

void furniture::makeMoreHipster(){
    table1.add_legs();
    stool1.remove_legs();
    stool2.remove_legs();
    stool3.remove_legs();
    stool4.remove_legs();
};


