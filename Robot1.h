//
// Created by Sevciuc on 24.04.2019.
//

#ifndef ROBOCOP_ROBOT1_H
#define ROBOCOP_ROBOT1_H

class Robot1 {
    struct rob {
        int x, y;
    } a_;
public:
    Robot1();

    void moveDr();

    void moveJos();

    int linia();

    int coloana();
};

#endif //ROBOCOP_ROBOT1_H
