// example:
// declaration of a rectangle object that is contains four line objects

#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "hwlib.hpp"

class circle {
private:
   hwlib::window & w;
   int start_x;
   int start_y;
   int_fast16_t radius;
public:
   circle( 
       hwlib::window & w,
       int start_x, 
       int start_y,
       uint_fast16_t radius
   );
   void print();
};


#endif // RECTANGLE_HPP
