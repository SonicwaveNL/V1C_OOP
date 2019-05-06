#include <iostream>
#include "furniture.hpp"

using namespace std;

int main(int argc, char **argv){

    cout << "BEFORE HIPSTER ==============" << endl << endl;

    furniture fur1;

    fur1.print();

    fur1.makeMoreHipster();

    cout << endl;

    cout << "AFTER HIPSTER ==============" << endl << endl;

    fur1.print();

    cout << endl;

}