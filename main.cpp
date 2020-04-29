#include <iostream>
#include "Harta.h"
#include "Robot1.h"

using namespace std;


int main() {
    int x,y,z;
    Harta aa(15, 15);
    aa.plasareCapcaneSiBonusuri();
    /*aa.afisare();
    cout<<"Alegeti un robot de la 1 la 3\n";
    cin>>x;
    cout<<"Alegeti punctul (x,y) final\n";
    cin>>y>>z;
    if(x==1)
        aa.rob1(z,y);
    else if(x==2)
        aa.rob2(y,z);
    else
        aa.rob3(y,z);*/
}