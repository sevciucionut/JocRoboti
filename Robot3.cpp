//
// Created by Sevciuc on 25.04.2019.
//

#include "Robot3.h"

Robot3::Robot3() {
    a_.x = 0;
    a_.y = 0;
}

void Robot3::moveDr() {
    a_.y++;
}

void Robot3::moveJos() {
    a_.x++;
}

void Robot3::moveSusDr() {
    a_.x--;
    a_.y++;
}

void Robot3::moveSus() {
    a_.x--;
}

void Robot3::moveDrJos() {
    a_.x++;
    a_.y++;
}

void Robot3::moveStJos() {
    a_.x++;
    a_.y--;
}

void Robot3::moveSt() {
    a_.y--;
}

int Robot3::linia() {
    return a_.x;
}

int Robot3::coloana() {
    return a_.y;
}
