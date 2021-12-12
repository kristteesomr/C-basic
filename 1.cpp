#include <stdio.h>
#include <iostream>
#include <ostream>
using namespace std;

int main(){
    cout << setw(5) << left << "ID";
    cout << setw(30) << left << "Name";
    cout << setw(20) << right << "Address" << endl;
    cout << setfill('-');
    cout << setw(5) << "-" << endl;

    cout << setfill(' ');

    cout << setw(5) << left << 1;
    cout << setw(30) << left << "Luu Duc Quang";
    cout << setw(20) << right << "Hoang Mai, Hanoi" << endl;

    cout << setw(5) << left << 2;
    cout << setw(30) << left << "Dong Gang Thep";
    cout << setw(20) << right << "Dong Anh, Hanoi" << endl;

    cout << setw(5) << left << 2;
    cout << setw(30) << left << "Nguyen Van Nam";
    cout << setw(20) << right << "Hung Yen" << endl;
}
