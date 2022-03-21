#include "Notebook.hpp"

using namespace std;
using namespace ariel;

void Notebook::write(int page, int row, int column, Direction direction, string const &str)
{
    if (page < 0 || row < 0 || column < 0){
        throw "invalid input";
    }
}

string Notebook::read(int page, int row, int column, Direction direction, int length)
{
    if (page < 0 || row < 0 || column < 0){
        throw "invalid input";
    }
    return " ";
}

void Notebook::erase(int page, int row, int column, Direction direction, int length)
{
    if (page < 0 || row < 0 || column < 0){
        throw "invalid input";
    }
}

void Notebook::show(int page)
{
}