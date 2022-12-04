//
// Created by llucp on 01/12/2022.
//

#include "Solucio.h"

Solucio::Solucio() {

}

Solucio::Solucio(const vector<vector<int>> &m, Posicio inici) {
    nFilas = m.size();
    nColumnas = m[0].size();
    reserva();
    for (int i=1; i<=nFilas; i++)
        for (int j=1; j<=nColumnas; j++)
            res[i][j] = "*";
    res[inici.x()][inici.y()] = 1;
}

Solucio::Solucio(const Solucio &o) {
    copia(o);
}

Solucio::~Solucio() {
    allibera();
}

Solucio &Solucio::operator=(const Solucio &o) {
    if (this != &o) {
        allibera();
        copia(o); // bad alloc
    }
    return *this;
}

Candidats Solucio::inicialitzarCandidats(Posicio ant) const {
    return Candidats(ant);
}

bool Solucio::acceptable(Candidats iCan) const {
    Posicio desti = iCan.actual(valor);

    return(desti.x()>0 and desti.x()<nColumnas and desti.y() > 0 and desti.y()<nFilas and res[desti.x()][desti.y()]=="*");
}

void Solucio::anotar(const Candidats &iCan) {

    Posicio desti = iCan.actual(valor);
    niv++;
    res[desti.x()][desti.y()] = niv;
}

void Solucio::desanotar(const Candidats &iCan) {
    Posicio desti = iCan.actual(valor);
    res[desti.x()][desti.y()] = "*";
    niv--;
}

bool Solucio::completa() const {
    return niv == nFilas*nColumnas;
}

void Solucio::reserva() {

}

void Solucio::copia(const Solucio &s) {

}

void Solucio::allibera() {

}
