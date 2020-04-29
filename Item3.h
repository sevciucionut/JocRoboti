//
// Created by Sevciuc on 24.04.2019.
//

#ifndef ROBOCOP_ITEM3_H
#define ROBOCOP_ITEM3_H

class Item3 {
    struct it {
        int x, y;
    } *bonus3_;
public:
    Item3(int l, int L);

    ~Item3();

    it &operator[](int poz) {
        return bonus3_[poz];
    }
};

#endif //ROBOCOP_ITEM3_H
