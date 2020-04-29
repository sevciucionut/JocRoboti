//
// Created by Sevciuc on 25.04.2019.
//

#ifndef ROBOCOP_ROBOT2_H
#define ROBOCOP_ROBOT2_H

class Robot2 {
    struct rob {
        int x, y;
    } a_;
public:
    Robot2();

    void moveDr();

    void moveJos();

    void moveDrJos();

    int linia();

    int coloana();
};

#endif //ROBOCOP_ROBOT2_H
