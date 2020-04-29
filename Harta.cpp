//
// Created by Sevciuc on 23.04.2019.
//

#include <iostream>
#include "Harta.h"
#include "Robot2.h"
#include "Robot3.h"

using namespace std;

Harta::Harta(int l, int L) : l_(l), L_(L) {

    *map_ = new int[l];
    for (int i = 0; i < l; i++)
        map_[i] = new int[L];

    for (int i = 0; i < l_; i++)
        for (int j = 0; j < L_; j++)
            map_[i][j] = 0;

    //map_[fi][fj]=5;
}

Harta::~Harta() {
    for (int i = 0; i < l_; i++)
        delete map_[i];
    delete map_;
}

void Harta::afisare() {
    for (int i = 0; i < l_; ++i) {
        for (int j = 0; j < L_; ++j) {
            cout << map_[i][j] << " ";
        }
        cout << endl;
    }
}

void Harta::plasareCapcaneSiBonusuri() {
    Capcane a(l_, L_);
    Item1 b(l_, L_);
    Item2 c(l_, L_);
    Item3 d(l_, L_);
    for (int i = 0; i < l_; ++i) {
        map_[a[i].x][a[i].y] = -1;
        map_[b[i].x][b[i].y] = 1;
        map_[c[i].x][c[i].y] = 2;
        map_[d[i].x][d[i].y] = 3;
    }
}

void Harta::rob1(int fi, int fj) {
    Robot1 a;
    int nr = 0;
    while (a.linia() < fi) {
        nr++;
        cout << "Runda " << nr << endl;
        a.moveJos();
        cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
        if (map_[a.linia()][a.coloana()] == -1) {
            nr++;
            cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n\n"
                    "Runda " << nr << " nu se va intampla nimic\n\n";
        }
        if (map_[a.linia()][a.coloana()] == 1) {
            nr--;
            cout << "Robotul ajunge pe un bonus in care tabela se defecteaza si castiga o runda\n\n";
        }
    }

    while (a.coloana() < fj) {
        nr++;
        cout << "Runda " << nr << endl;
        a.moveDr();
        cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
        if (map_[a.linia()][a.coloana()] == -1) {
            nr++;
            cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n"
                    "Runda " << nr << " nu se va intampla nimic\n";
        }
        if (map_[a.linia()][a.coloana()] == 1) {
            nr--;
            cout << "Robotul ajunge pe un bonus in care tabela se defecteaza si castiga o runda\n";
        }
    }

    cout << "Robotul ajunge in casuta finala in runda " << nr << endl;

}

void Harta::rob2(int fi, int fj) {
    Robot2 a;
    int nr = 0, ok = 0;

    while (a.linia() < fi && a.coloana() < fj) {
        nr++;
        cout << "Runda " << nr << endl;
        a.moveDrJos();
        cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
        if (map_[a.linia()][a.coloana()] == -1) {
            if (ok)
                ok--;
            nr++;
            cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n"
                    "Runda " << nr << " nu se va intampla nimic\n";
        }
        if (map_[a.linia()][a.coloana()] == 2) {
            ok++;
            cout << "Robotul ajunge pe un bonus si primeste un scut impotriva capcanelor\n";
        }
    }

    while (a.linia() < fi) {
        nr++;
        cout << "Runda " << nr << endl;
        a.moveJos();
        cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
        if (map_[a.linia()][a.coloana()] == -1) {
            nr++;
            cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n";
            if (ok) {
                cout << "Robotul isi foloseste scutul si nu va fi afectat\n";
                nr--;
                ok--;
            } else
                cout << "Runda " << nr << " nu se va intampla nimic\n";
        }
        if (map_[a.linia()][a.coloana()] == 2) {
            ok++;
            cout << "Robotul ajunge pe un bonus si primeste un scut impotriva capcanelor\n";
        }
    }

    while (a.coloana() < fj) {
        nr++;
        cout << "Runda " << nr << endl;
        a.moveDr();
        cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
        if (map_[a.linia()][a.coloana()] == -1) {
            nr++;
            cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n";
            if (ok) {
                cout << "Robotul isi foloseste scutul si nu va fi afectat\n";
                nr--;
                ok--;
            } else
                cout << "Runda " << nr << " nu se va intampla nimic\n";
        }
        if (map_[a.linia()][a.coloana()] == 2) {
            ok++;
            cout << "Robotul ajunge pe un bonus si primeste un scut impotriva capcanelor\n";
        }
    }

    cout << "Robotul ajunge in casuta finala in runda " << nr << endl;

}

void Harta::rob3(int fi, int fj) {
    Robot3 a;
    int nr = 0, ok = 0;

    while (a.linia() < fi && a.coloana() < fj) {
        nr++;
        cout << "Runda " << nr << endl;
        a.moveDrJos();
        cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
        if (map_[a.linia()][a.coloana()] == -1) {
            if (ok)
                ok--;
            nr++;
            cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n"
                    "Runda " << nr << " nu se va intampla nimic\n";
        }
        if (map_[a.linia()][a.coloana()] == 3) {
            if ((fi + fj) % 2 != (a.linia() + a.coloana()) % 2) {
                ok = 1;
                cout << "Robotul ajunge pe un bonus si se poate muta o pozitie orizontal sau vertical\n";
            }
        }
    }

    while (a.coloana() < fj) {
        nr++;
        cout << "Runda " << nr << endl;
        if (a.linia() > fi)a.moveSusDr();
        else a.moveDrJos();
        cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
        if (map_[a.linia()][a.coloana()] == -1) {
            nr++;
            cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n"
                    "Runda " << nr << " nu se va intampla nimic\n";
        }
        if (map_[a.linia()][a.coloana()] == 3) {
            ok = 1;
            cout << "Robotul ajunge pe un bonus si se poate muta o pozitie orizontal sau vertical\n";
        }
    }

    while (a.linia() < fi) {
        nr++;
        cout << "Runda " << nr << endl;
        if (a.coloana() > fj)a.moveStJos();
        else a.moveDrJos();
        cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
        if (map_[a.linia()][a.coloana()] == -1) {
            nr++;
            cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n"
                    "Runda " << nr << " nu se va intampla nimic\n";
        }
        if (map_[a.linia()][a.coloana()] == 3) {
            ok = 1;
            cout << "Robotul ajunge pe un bonus si se poate muta o pozitie orizontal sau vertical\n";
        }
    }


    if (a.linia() == fi) {
        int nrr = 0;
        while (a.coloana() < fj) {
            if (nrr % 2 == 0) {
                nr++;
                cout << "Runda " << nr << endl;
                a.moveDrJos();
                cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
                if (map_[a.linia()][a.coloana()] == -1) {
                    nr++;
                    cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n"
                            "Runda " << nr << " nu se va intampla nimic\n";
                }
                if (map_[a.linia()][a.coloana()] == 1) {
                    ok = 1;
                    cout << "Robotul ajunge pe un bonus si se poate muta o pozitie orizontal sau vertical\n";
                }
            } else {
                nr++;
                cout << "Runda " << nr << endl;
                if (a.linia() > fj)a.moveStJos();
                else a.moveStJos();
                cout << "Robotul se muta pe pozitia " << a.linia() << " " << a.coloana() << endl;
                if (map_[a.linia()][a.coloana()] == -1) {
                    nr++;
                    cout << "Robotul ajunge pe o capcana si trebuie sa stea pe bara o runda\n"
                            "Runda " << nr << " nu se va intampla nimic\n";
                }
                if (map_[a.linia()][a.coloana()] == 1) {
                    ok = 1;
                    cout << "Robotul ajunge pe un bonus si se poate muta o pozitie orizontal sau vertical\n";
                }

            }
            nrr++;
        }
    }

    if (a.coloana() == fj && a.linia() == fi)
        cout << "Robotul ajunge pe pozitia finala in runda " << nr << endl;
    else if (a.coloana() != fj && ok == 1) {
        if (a.coloana() < fj) a.moveDr();
        else a.moveSt();
        cout << "Robotul se muta pe orizontala si ajunge pe pozitia finala in runda " << nr << endl;
    } else if (a.linia() != fi && ok == 1) {
        if (a.linia() > fi) a.moveSus();
        else a.moveJos();
        cout << "Robotul se muta pe verticala si ajunge pe pozitia finala in runda " << nr << endl;
    } else cout << "Robotul nu ajunge pe pozitia finala\n";
}