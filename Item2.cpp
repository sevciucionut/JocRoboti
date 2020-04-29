//
// Created by Sevciuc on 24.04.2019.
//

#include <cstdlib>
#include "Item2.h"

Item2::Item2(int l, int L) {

    bonus2_=new it[l];

    for (int i = 0; i < l; i++) {
        int x = rand() % l, y = rand() % L;
        bonus2_[i].x=x;
        bonus2_[i].y=y;
    }
}

Item2::~Item2() {
    delete bonus2_;
}
