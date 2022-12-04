#include <iostream>
#include <fstream>
#include <iomanip>
#include <iterator>
#include <vector>

using namespace std;

vector<vector<int>> llegir_fitxer(){
    ifstream f;
    string fitxer="test.txt";
    int contador_linia = 0;
    int contador_columna = 0;
    string s;

    string linia;
    f.open(fitxer);

    vector<vector<int>> matriu;

    if (!f.fail()){
        getline(f,linia);

        stringstream ss(linia);
        istream_iterator<string> begin(ss);
        istream_iterator<string> end;
        vector<string> tokens(begin, end);

        while (!f.eof()){
            getline(f,linia);
            stringstream ss(linia);
            istream_iterator<std::string> begin(ss);
            istream_iterator<std::string> end;
            vector<std::string> tokens(begin, end);

            contador_columna = 0;
            matriu.push_back(vector<int>());
            for (auto &s: tokens) {
                matriu[contador_linia].push_back(stoi(s));
            }
            contador_linia++;
        }
    }

    return matriu;

}


int main() {

    vector<vector<int>> matriu= llegir_fitxer();

    return 0;
}
