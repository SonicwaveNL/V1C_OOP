#include "vanilla.hpp"
#include "hwlib.hpp"

void vanilla::print() {
  for (int i = start_x; i < end_x; i++) {
    for (int j = start_y; j < end_y; j++) {
      w.write(hwlib::xy(i, j));
    }
  }
};