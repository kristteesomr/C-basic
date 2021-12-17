// TAO HANG SO
// Tạo file header link với src
// namespace tự tạo
#include <iostream>
#include "Constants.h" // include header file sử dụng file tự tạo
#define e 2.71 //Cach 1
using namespace std;
using namespace constants; // namespace tự tạo 


int main(){
    const double PI {3.14}; //Cach 2
    cout << "Pi = " << PI << endl;
    cout << "e = " << e << endl;

    //Cách 3
    int Pi = 69;
    cout << "Pi = " << Pi << endl;
    cout << "Pi const = " << constants:: Pi << endl; //Dùng namespace tự tạo :: dùng để truy cập vào hằng số trong namespace

}

/*
Pi = 3.14
e = 2.71
Pi = 69
Pi const = 3.14159
*/