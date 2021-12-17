// Alignment sử dụng thư viện iomanip
#include <iostream>
#include <iomanip> // thu vien cua setw() , setfill()
using namespace std;

int main(){
    cout << setw(5) << left << "ID"; // Do rong 5 ky tu, can trai
    cout << setw(30) << left << "Name"; // Do rong 30 ky tu, can trai
    cout << setw(20) << right << "Address" << endl; // Do rong 20 ky tu, can phai

    cout << setfill('-');
    cout << setw(55) << "-" << endl; // 55 = 5 +30+20 , fill 55 ki tu

    cout << setfill(' '); // Cac khoang trong fill = dau cach

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

/*
ID   Name                                       Address
-------------------------------------------------------
1    Luu Duc Quang                     Hoang Mai, Hanoi
2    Dong Gang Thep                     Dong Anh, Hanoi
2    Nguyen Van Nam                            Hung Yen
*/
