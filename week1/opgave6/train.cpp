#include <iostream>
#include <unistd.h>

#include "hwlib.hpp"
#include "rectangle.hpp"
#include "circle.hpp"
#include "train.hpp"

//Cart body
int b_start_x = 10;
int b_start_y = 25;
int b_end_x = 40;
int b_end_y = 40;

//Wheel left
int wl_start = 15;
int wl_end = 40;
int wl_radius = 3;

//Wheel right
int wr_start = 35;
int wr_end = 40;
int wr_radius = 3;

//Cart positions
int count = 0;
int pos = 0;

//Track
int tr_amount = 50;
int tr_count = 0;
int tr_pos = 0;

void train::print_track(){

    line t_bottom( w, 0, 45, 256, 45 );
    rectangle track( w, tr_pos, 43, tr_pos + 4, 45 );
    t_bottom.print();
    track.print();

};

//Print cart on the ground
void train::print_down() {

    b_start_x = 10 + (33 * pos);
    b_end_x = 40 + (33 * pos);
    b_start_y = 25;
    b_end_y = 40;

    wl_start = 15 + (33 * pos);
    wl_end = 40;

    wr_start = 35 + (33 * pos);
    wr_end = 40;

    rectangle body( w, b_start_x, b_start_y, b_end_x, b_end_y );
    body.print();

    circle wheel_l( w, wl_start, wl_end, wl_radius );
    wheel_l.print();

    circle wheel_r( w, wr_start, wr_end, wr_radius );
    wheel_r.print();

};

//Print cart above the ground
void train::print_up() {

    b_start_x = 10 + (33 * pos);
    b_end_x = 40 + (33 * pos);
    b_start_y = 20;
    b_end_y = 35;

    wl_start = 15 + (33 * pos);
    wl_end = 35;

    wr_start = 35 + (33 * pos);
    wr_end = 35;

    rectangle body( w, b_start_x, b_start_y, b_end_x, b_end_y );
    body.print();

    circle wheel_l( w, wl_start, wl_end, wl_radius );
    wheel_l.print();

    circle wheel_r( w, wr_start, wr_end, wr_radius );
    wheel_r.print();

};

void train::run(){

    while(true){

        for(int i = 0; i < carts; i++){
            
            if(i == count){
                usleep(30000);
                print_up();
            } else {
                usleep(30000);
                print_down();
            }

            for(int j = 1; j < tr_amount; j++){

                if ( tr_count % 2 == 0 ){
                    print_track();
                } else {
                    tr_pos -= 2;
                    print_track();
                }
                
                tr_pos = j * 7; 
                
            }
    
            pos++;
            
        }

        tr_count++;

        w.flush();

        pos = 0;
        tr_pos = 0;

        if(count - 1 == carts){
            count = 0;
        } else {
            count ++;
        }

        w.clear();

    }
};