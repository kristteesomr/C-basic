// CAC CACH LAY SO RANDOM

#include <iostream>
#include <cstdlib> // for srand(), rand()
#include <ctime> // for time(NULL)
#include <random> // for random_device 
using namespace std;

int main(){
    srand(time(NULL));

    int a = rand()%100 +1; // tu 1 den 100 pick random 1 so
    cout << a << endl;
//
    random_device rd; 
    mt19937 rng(rd()); // Co the dung mt19937_64

    auto n = rng(); // kieu auto la auto fit kieu du lieu cua n vs so random
    cout << n << endl;

    uniform_int_distribution<int> uni(1,1000); // Tu 1 den 1000 pick random 1 so
    auto m = uni(rng);
    cout << m << endl;

}

/*
70
2412496532
727
*/