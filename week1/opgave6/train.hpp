#ifndef TRAIN_HPP
#define TRAIN_HPP

#include "hwlib.hpp"

class train {
private:
   hwlib::window & w;
   int carts;   
   
public:
   
    train(
        hwlib::window & w,
        int carts
    ):
        w( w ), 
        carts( carts )
    {}

   void print_down();
   void print_up();
   void print_track();
   void run();
};


#endif