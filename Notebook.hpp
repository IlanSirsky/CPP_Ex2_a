#pragma ONCE

#include "Direction.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

namespace ariel {
    class Notebook{
        public:
        void write(int page, int row, int column, Direction direction, string const &str);
        static string read(int page, int row, int column, Direction direction, int length);
        void erase(int page, int row, int column, Direction direction, int length);
        void show(int page);
    };
}
