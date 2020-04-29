//
// Created by Sevciuc on 25.04.2019.
//

#include "Robot1.h"

Robot1::Robot1() {
    a_.x = 0;
    a_.y = 0;
}

void Robot1::moveDr() {
    a_.y++;
}

void Robot1::moveJos() {
    a_.x++;
}

int Robot1::linia() {
    return a_.x;
}

int Robot1::coloana() {
    return a_.y;
}
