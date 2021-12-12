// HE 16 He 10 He 8 He 2 CONVERSION

#include <iostream>
#include <bitset> // thu vien chuyen sang he nhi phan 
using namespace std;

int main(){
    int n;
    cout << "Enter n (Hexadecimal): ";
    cin >> hex >> n; //(He 16)

    cout << "Octal: " << oct << n << endl; // He 8 
    cout << "Decimal: " << dec << n << endl; // He 10
    // ? cout << "Binary: " << bit << n << endl;

    // Note: there is no I/O manipulator that sets up a stream to print out
    // numbers in binary format (e.g. bin). If binary output is necessary
    // the std::bitset trick can be used:
    cout << "The number n in binary:  " << bitset<8> (n) << endl; // bitset<8> {n} khong duoc phai dung ngoac ()

    char a = -58;
    bitset<8> x(a); // Chuyen cho bien x 
    cout << x << '\n';

    short c = -315;
    bitset<16> y(c); // chuyen cho bien y
    cout << y << '\n';
}

/*
Enter n (Hexadecimal): 10AF
Octal: 10257
Decimal: 4271
The number n in binary:  10101111
11000110
1111111011000101
*/