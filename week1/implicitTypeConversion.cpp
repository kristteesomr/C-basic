//Ep kieu ngam dinh do chinh xac khong cao (Do trinh bien dich tu fix)
#include <iostream>
using namespace std;

int main(){
    short s(1);
    int n(2);
    double d(1.0);
    cout << typeid((s+d)*n).name() << " " << (s+d)*n << endl;
    return 0;
}
