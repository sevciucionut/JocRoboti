//
// Created by Sevciuc on 23.04.2019.
//

#include <cstdlib>
#include "Item1.h"

Item1::Item1(int l, int L) {

    bonus1_=new it[l];

    for (int i = 0; i < l; i++) {
        int x = rand() % l, y = rand() % L;
        bonus1_[i].x=x;
        bonus1_[i].y=y;
    }
}

Item1::~Item1() {
    delete bonus1_;
}
