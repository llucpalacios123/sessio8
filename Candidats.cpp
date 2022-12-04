//
// Created by llucp on 01/12/2022.
//

#include "Candidats.h"
#include "Posicio.h"

static Posicio despl[] = {Posicio(1, 0), Posicio(-1, 0),
                          Posicio(0, 1), Posicio(0, -1)};

Posicio Candidats::actual(int valor) const {
    if (fi())
        throw("No hi ha més candidats");
    Posicio p = anterior;

    return anterior+despl[iCan]*valor;
}

bool Candidats::fi() const{
    return iCan >=4;
}

void Candidats::seguent() {
    if (fi())
        throw("No hi ha més candidats");
    iCan++;
}

Candidats::Candidats(Posicio ant) {
    iCan = 0;
    anterior = ant;
}
