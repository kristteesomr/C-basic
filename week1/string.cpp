// NHAP XUAT string có dấu cách voi getline(cin,a,...)
// Xóa bộ nhớ đêm cin.ignore(32767,'\n')
#include <iostream>
#include <string>
using namespace std;

int main(){
     cout << "Enter your full name: ";
     string Name;
     cin >> Name;
     cout << "Enter your age: ";
     string Age;
     cin >> Age;
     cout << "Your name is " << Name << endl;
     cout << "Your age is " << Age << endl;
     cin.ignore(32767, '\n'); // Xoa bo nho dem chua \n 

    cout << "Enter your full name: "<< endl;
    string Name1;
    getline(cin,Name1);

    cout << "Enter your age: " <<endl;
    string Age1;
    getline(cin,Age1);

    cout << "Your name is " << Name1 << endl;
    cout << "Your age is " << Age1 << endl;
    cin.ignore(32767, '\n'); // Xoa bo nho dem chua \n 


    cout << "Enter your text: " <<endl;
    string text;
    getline(cin,text,'_'); // ket thuc dien khi gap ki tu _ 
    cout << text << endl;

}

/*
Enter your full name: Duc Quang
Enter your age: Your name is Duc
Your age is Quang 
*/

/*
Enter your full name: 
Duc Quang
Enter your age: 
12
Your name is Duc Quang
Your age is 12
*/

/*
Enter your full name: Duc Quang
Enter your age: Your name is Duc
Your age is Quang
Enter your full name: 
Duc Quang
Enter your age: 
20
Your name is Duc Quang
Your age is 20
*/