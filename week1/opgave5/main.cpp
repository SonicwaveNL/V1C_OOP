// example:
// a rectangle object that is contains four line objects

#include "hwlib.hpp"
#include "vanilla.hpp"

int main(int argc, char **argv){
    
   // the window in which we want to print the line
   hwlib::target::window w( 128, 64 );    

   vanilla ice(w, 10, 10, 40, 40);
   ice.print();
   
   // keep the window around until we close it
   for(;;){ w.poll(); }       
}