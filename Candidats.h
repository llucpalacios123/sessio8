//
// Created by lluc9 on 04/12/2022.
//

#ifndef SESSIO8_CANDIDATS_H
#define SESSIO8_CANDIDATS_H

#include "Posicio.h"

class Candidats {
public:
    Candidats(Posicio ant);
    Posicio actual(int valor)const;
    void seguent() ;
    bool fi()const;
private:
    int iCan;
    Posicio anterior;
};
#endif //SESSIO8_CANDIDATS_H
