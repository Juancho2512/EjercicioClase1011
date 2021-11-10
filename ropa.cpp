#include "ropa.h"

ropa::ropa(const char &talla, const std::string &color, const short int &precio, const std::string &codigo) : talla(talla), color(color), precio(precio), codigo(codigo) {}

const char &ropa::getTalla() cont {
    return talla;
}
void ropa::setTalla(const char &talla){
    ropa::talla=talla;
}
const std::string &ropa::getColor() cont {
    return color;
}
void ropa::setColor(const std::string &color){
    ropa::color=color;
}
const int &precio::getPrecio() cont {
    return precio;
}
void ropa::setPrecio(const short int &precio){
    ropa::talla=talla;
}
const std::string &codigo::getCodigo() cont {
    return codigo;
}
void ropa::setCodigo(const std::string &codigo){
    ropa::codigo=codigo;
}