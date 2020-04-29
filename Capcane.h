//
// Created by Sevciuc on 23.04.2019.
//

#ifndef ROBOCOP_CAPCANE_H
#define ROBOCOP_CAPCANE_H

class Capcane {
    struct cpc{
        int x,y;
    }*traps_;
public:
    Capcane(int l, int L);

    ~Capcane();

    cpc &operator[](int poz) {
        return traps_[poz];
    }
};

#endif //ROBOCOP_CAPCANE_H
