//
// Created by Sevciuc on 23.04.2019.
//

#include <cstdlib>
#include "Capcane.h"

Capcane::Capcane(int l, int L) {

    traps_ = new cpc[l];

    for (int i = 0; i < l; i++) {
        int x = rand() % l, y = rand() % L;
        traps_[i].x = x;
        traps_[i].y = y;
    }
}

Capcane::~Capcane() {
    delete traps_;
}
