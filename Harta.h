//
// Created by Sevciuc on 23.04.2019.
//

#ifndef ROBOCOP_HARTA_H
#define ROBOCOP_HARTA_H

#include "Capcane.h"
#include "Item1.h"
#include "Item2.h"
#include "Item3.h"
#include "Robot1.h"

class Harta {
    int **map_;
    const int l_, L_;
public:
    Harta(int l, int L);

    ~Harta();

    void afisare();

    void plasareCapcaneSiBonusuri();

    void rob1(int fi, int fj);

    void rob2(int fi, int fj);

    void rob3(int fi, int fj);
};

#endif //ROBOCOP_HARTA_H
