// example:
// definition of the functions of a line class 

#include <iostream>
#include "hwlib.hpp"
#include "circle.hpp"

circle::circle(hwlib::window & w, int start_x, int start_y, uint_fast16_t radius):
   w( w ),
   start_x( start_x ),
   start_y( start_y ),
   radius( radius )
{}

void circle::print(){

   hwlib::circle circle( 
      hwlib::xy( start_x, start_y),
      radius
   );
   circle.draw( w );
   w.flush();
}