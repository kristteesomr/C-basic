#include <iostream>
using namespace std;

// void printArray(int arr[]){
//     for(auto &item: arr){ // bi loi bien dich 
//         cout << item << " ";
//     }
// }

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    for(auto item: arr){ // co the dung auto &item chay se nhanh hon
        cout << item << " ";
    }

    for(auto &item: arr){ // co the dung auto &item chay se nhanh hon
        cout << item << " ";
    }

    // Ham for each khong lam viec voi con tro tro toi 1 mang
    // printArray(arr);
}

/*
1 2 3 4 5 6 7 8 9
*/