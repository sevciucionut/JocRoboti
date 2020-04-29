//
// Created by Sevciuc on 25.04.2019.
//

#ifndef ROBOCOP_ROBOT3_H
#define ROBOCOP_ROBOT3_H
class Robot3 {
    struct rob {
        int x, y;
    } a_;
public:
    Robot3();

    void moveDr();

    void moveJos();

    void moveSusDr();

    void moveSus();

    void moveDrJos();

    void moveStJos();

    void moveSt();

    int linia();

    int coloana();
};
#endif //ROBOCOP_ROBOT3_H
