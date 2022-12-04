//
// Created by lluc9 on 04/12/2022.
//

#ifndef SESSIO8_POSICIO_H
#define SESSIO8_POSICIO_H


class Posicio {
public:
    Posicio();
    Posicio(int x, int y);
    Posicio operator + (const Posicio &p1) const;
    Posicio operator * (const int i) const;
    int x() const;
    int y() const;
private:
    int x_;
    int y_;
};


#endif //SESSIO8_POSICIO_H
