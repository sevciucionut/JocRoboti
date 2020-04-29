//
// Created by Sevciuc on 24.04.2019.
//

#ifndef ROBOCOP_ITEM2_H
#define ROBOCOP_ITEM2_H

class Item2 {
    struct it{
        int x,y;
    }*bonus2_;
public:
    Item2(int l, int L);

    ~Item2();

    it &operator[](int poz) {
        return bonus2_[poz];
    }
};

#endif //ROBOCOP_ITEM2_H
