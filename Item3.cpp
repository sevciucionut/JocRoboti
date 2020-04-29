//
// Created by Sevciuc on 24.04.2019.
//

#include <cstdlib>
#include "Item3.h"

Item3::Item3(int l, int L) {

    bonus3_=new it[l];

    for (int i = 0; i < l; i++) {
        int x = rand() % l, y = rand() % L;
        bonus3_[i].x=x;
        bonus3_[i].y=y;
    }
}

Item3::~Item3() {
    delete bonus3_;
}
