#include <iostream>
using namespace std;

//Quy dinh: bien toan cuc ki hieu g_...
// bien tinh ki hieu s_...
// bien cuc bo ko ki hieu

void doSomething(){
    static int s_value {0};
    ++s_value;
    cout << s_value << endl;

}

int main(){
    doSomething();
    doSomething();
    doSomething();
    doSomething();
    doSomething();

    // bien s_value o ngoai ham khong the su dung duoc
    // ++s_value;
    // cout <<s_value <<endl;
}

/*
staticVariable.cpp: In function 'int main()':
staticVariable.cpp:22:7: error: 's_value' was not declared in this scope
     ++s_value;
*/
/*
1
2
3
4
5
*/