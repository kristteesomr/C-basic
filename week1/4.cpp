// CAC KIEU KHOI TAO
// bool 
// if else
#include <iostream>
#include <iomanip> // thu vien su dung setprecision
using namespace std;

int main(){
    
    int n = 1; // copy initalization
    int a (2); // direct initalization
    int b {3}; // uniform initalization 
    int c {}; 
    float d {4.0f}; // f suffix means float
    double e (4); // default double
    long double f {4.0L}; // L suffix means long double
    float g {19.2};

    cout << setprecision(10); // lay chinh xac 10 chu so 

    cout << n << endl;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;

    bool b1(true);
    bool b2{false};
    bool b3 = 1;
    bool b4 {!true};
    bool b5 {!false};
    bool b6 = !1;

    cout << b1 << endl;
    cout << !b1 << endl; // co the dung kieu nay
    cout << b2 << endl;
    cout << b3 << endl;
    cout << b4 << endl;
    cout << b5 << endl;
    cout << b6 << endl;

    cout << boolalpha; // Hien ra dang chu
    cout << b2 << endl;
    cout << b3 << endl;
    cout << noboolalpha; // Hien ra dang so
    cout << b4 << endl;
    cout << b5 << endl;
    cout << b6 << endl;

    if (b1==true)
        cout << "b1 is true" << endl;
    else 
        cout << "b1 is false" << endl;

    if (b1)
        cout << "b1 is true" << endl;
    else 
        cout << "b1 is false" << endl;

}

/*
1
2
3
0
4
4
4
19.20000076
1
0
0
1
0
1
0
false
true
0
1
0
b1 is true
b1 is true
*/