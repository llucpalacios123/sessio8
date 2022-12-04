//
// Created by lluc9 on 04/12/2022.
//

#ifndef SESSIO8_SOLUCIO_H
#define SESSIO8_SOLUCIO_H


using namespace std;

#include "Candidats.h"
#include <vector>
#include <string>

using namespace std;

class Solucio {
public:
    Solucio();
    Solucio(const vector<vector<int>> &m,  Posicio inici=Posicio(0,0));
    Solucio(const Solucio &o);
    ~Solucio();
    Solucio & operator=(const Solucio &o);
    Candidats inicialitzarCandidats(Posicio ant) const;
    bool acceptable(Candidats iCan) const;
    void anotar(const Candidats &iCan);
    void desanotar(const Candidats &iCan);
    bool completa() const;
private:
    void reserva();
    void copia(const Solucio &s);
    void allibera();

    int niv;
    int nFilas;
    int nColumnas;
    int valor;
    vector<vector<int>> matriu;
    vector<vector<string>> res;
};


#endif //SESSIO8_SOLUCIO_H
