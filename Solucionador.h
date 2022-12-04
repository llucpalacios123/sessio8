//
// Created by lluc9 on 04/12/2022.
//

#ifndef SESSIO8_SOLUCIONADOR_H
#define SESSIO8_SOLUCIONADOR_H



#include "Solucio.h"

class Solucionador {

public:
    Solucio solucionar(const Solucio& inicial);
private:

    void trobarMillor(Solucio &actual);

    Solucio optima;

};

#endif //SESSIO8_SOLUCIONADOR_H
