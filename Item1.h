//
// Created by Sevciuc on 23.04.2019.
//

#ifndef ROBOCOP_ITEM1_H
#define ROBOCOP_ITEM1_H

class Item1 {
    struct it{
        int x,y;
    }*bonus1_;
public:
    Item1(int l, int L);

    ~Item1();

    it &operator[](int poz) {
        return bonus1_[poz];
    }
};

#endif //ROBOCOP_ITEM1_H
