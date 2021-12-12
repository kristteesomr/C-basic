// COMMA OPERATOR
#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int y = 2;
    int z = (++x,++y);
    cout << x << y << z << endl;
}
/*
133
*/