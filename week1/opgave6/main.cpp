// example:
// a rectangle object that is contains four line objects

#include "hwlib.hpp"
#include "train.hpp"

int main(int argc, char **argv){
    
   // the window in which we want to print the line
   hwlib::target::window w( 128, 64 );   

   train cart1(w, 3);
   cart1.run();
    
   // circle ice( w, 20, 40, 5 );
   // ice.print();
   
   // keep the window around until we close it
   for(;;){ w.poll(); }       
}
