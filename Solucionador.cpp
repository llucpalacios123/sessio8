//
// Created by llucp on 01/12/2022.
//

#include "Solucionador.h"

Solucio Solucionador::solucionar(const Solucio &inicial) {
    Solucio actual = inicial;
    optima = inicial;
    trobarMillor(actual);
    return optima;
}

void Solucionador::trobarMillor(Solucio &actual) {

    Candidats iCan = actual.inicialitzarCandidats(Posicio(0,0));
    while (not iCan.fi()){
        if (actual.acceptable(iCan) /*and actual.potSerMillor(optima, iCan)*/) {
            actual.anotar(iCan);
            if (not iCan.fi())
                trobarMillor(actual);
            //if (actual.esMillor(optima))
            //optima = actual; // operador d’assignacio
            actual.desanotar(iCan);
        }
        iCan.seguent();
    }

}
