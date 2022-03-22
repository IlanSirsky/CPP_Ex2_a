#pragma ONCE

#include "Direction.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

namespace ariel {
    class Notebook{
        public:
        void write(u_int page, u_int row, u_int column, Direction direction, string const &str);
        static string read(u_int page, u_int row, u_int column, Direction direction, int length);
        void erase(u_int page, u_int row, u_int column, Direction direction, int length);
        void show(u_int page);
    };
}
