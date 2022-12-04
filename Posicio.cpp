//
// Created by llucp on 01/12/2022.
//

#include "Posicio.h"

Posicio::Posicio() {
    x_ = 0;
    y_ = 0;
}

Posicio::Posicio(int x, int y) {
    x_ = x;
    y_ = y;
}

Posicio Posicio::operator+(const Posicio &p1) const{
    return Posicio(x_+p1.x(), y_+p1.y());
}

int Posicio::x() const {
    return x_;
}

int Posicio::y() const {
    return y_;
}

Posicio Posicio::operator*(const int i) const{
    return Posicio(x_*i, y_*i);
}
