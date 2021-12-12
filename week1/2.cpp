
// Nhap Xuat du lieu 
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Hay nhap 1 so nguyen n = ";
    cin >> n;
    cout << "So nguyen ban vua nhap la n = " << n << endl;

    int nDay{0};
    int nMonth{0};
    int nYear{0};

    cout << "Enter your birthday: " << endl;1
    cin >> nDay >> nMonth >> nYear;
    cout << "Your birthday is " << nDay << "/" << nMonth << "/" << nYear << endl;
}

/*
Hay nhap 1 so nguyen n = 10
So nguyen ban vua nhap la n = 10

Enter your birthday:
19
02
2002
Your birthday is 19/2/2002
*/