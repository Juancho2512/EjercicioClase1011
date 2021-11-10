#ifndef EJERCICIOCLASE1011_ROPA_H
#define EJERCICIOCLASE1011_ROPA_H
#include <string>
class ropa
{
private:
    char talla;
    std::string color;
    short int precio;
    std::string codigo;

public:
    ropa::ropa(const char &talla, const std::string &color, const short int &precio, const std::string &codigo) : talla(talla), color(color), precio(precio), codigo(codigo) {}

    ~ropa();
};



ropa::~ropa()
{
}

#endif EJERCICIOCLASE1011_ROPA_H
