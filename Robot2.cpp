//
// Created by Sevciuc on 25.04.2019.
//

#include "Robot2.h"

Robot2::Robot2() {
    a_.x = 0;
    a_.y = 0;
}

void Robot2::moveDr() {
    a_.y++;
}

void Robot2::moveJos() {
    a_.x++;
}

void Robot2::moveDrJos() {
    a_.x++;
    a_.y++;
}

int Robot2::linia() {
    return a_.x;
}

int Robot2::coloana() {
    return a_.y;
}
