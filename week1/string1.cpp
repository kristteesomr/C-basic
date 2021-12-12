// Noi 2 string voi nhau
// Cong 2 string
// Do dai cua string
#include <iostream>
#include <string>
using namespace std;

int main(){
    string text;
    string text1;

    getline(cin,text);
    getline(cin,text1);

    string c = text + text1; // Noi 2 string voi nhau

    cout << text << endl;
    cout << text1 << endl;
    cout << c << endl;

    text += text1;
    cout << text << endl;

    string myName("LUU DUC QUANG");
    cout << myName << " has " << myName.length() << " characters" << endl; // Do dai cua string
    cout << myName << " has " << myName.size() << " characters" << endl;

}

/*
Quang
Teo
Quang
Teo
QuangTeo
*/

/*
Quang
Teo
Quang
Teo
QuangTeo
QuangTeo
*/

/* Duc Quang
Teo
Duc Quang
Teo
Duc QuangTeo
Duc QuangTeo
LUU DUC QUANG has 13 characters
LUU DUC QUANG has 13 characters
*/