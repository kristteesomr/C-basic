#include <iostream>
#include <array> // ARRAY STL
#include <algorithm>
#define MAX 10
using namespace std;

void printArray(const array<int, MAX> &arr){ // truyen tham chieu " hang" vi hieu suat 
    for(const auto &item: arr){ // khong bi loi bien dich nua  // co the su dung for each loops o moi ham
        cout << item << " ";
        
    }
    cout << endl;
}

int main(){
    array <int, MAX> arr = {4,1,7,3,9,5,2,4,9,10}; // = int arr[5];
    array <string,2> arr2 = {"quang","teo"}; // string arr2 
    array <char,10> arr3 = {'q'}; // char arr2 [10]

// .at()

    arr.at(2)= 1; // = arr[2] =1; nhma neu at(phan tu lon hon ban dau) thi se khong bao loi ma van chay va bao loi, cham hon, an toan hon
    cout << arr.at(2) <<endl;

// .size()
    cout << arr.size() << endl; // so phan tu ban dau
    cout << arr.max_size() << endl; // max size

// .front() in ra phan tu dau tien cua array
// .back() in ra phan tu cuoi cung cua array, neu array khong du tra ve 0

    cout << arr.front() << endl;
    cout << arr2.front() << endl;
    cout << arr.back() << endl;
    cout << arr2.back() << endl;

// .fill() fill het array boi 1 gia tri
    array <int,MAX> arr4;
    arr4.fill(1);
    printArray(arr4);

// a.swap(b) swap 2 array cung size cung kieu cho nhau
    array <int,MAX> arr5;
    arr5.fill(3);
    arr5.swap(arr4);
    printArray(arr4);
    printArray(arr5);

// a.empty() 
// This method can be used to check whether the array is empty or not. Syntax: array_name.empty(), returns true if array is empty else return false.
    int n = arr5.empty();
    cout << n << endl;

// .begin() .end() con tro chi den phan tu cuoi va phan tu dau

    std::array<int,5> myarray = { 5, 19, 77, 34, 99 };

    std::cout << "myarray contains:";
    for( auto it = myarray.begin(); it != myarray.end(); ++it )
        std::cout << ' ' << *it; // bat buoc phai su dung *it vi it la con tro

    std::cout << '\n';

// .rbegin() .rend() con tro nguoc reverse tro tu cuoi len dau
    std::array<int,4> myarray2 = {4, 26, 80, 14} ;
    std::cout << "myarray contains:";
    for ( auto rit=myarray2.rbegin() ; rit < myarray2.rend(); ++rit )
        std::cout << ' ' << *rit;
    std::cout << '\n';

// .cbegin() .cend()
/*
Returns a const_iterator pointing to the first element in the array container.

A const_iterator is an iterator that points to const content. 
This iterator can be increased and decreased (unless it is itself also const), just like the iterator returned by array::begin, 
but it cannot be used to modify the contents it points to, even if the array object is not itself const.
*/

    std::array<int,5> myarray3 = { 2, 16, 77, 34, 50 };

    std::cout << "myarray contains:";

    for ( auto it = myarray3.cbegin(); it != myarray3.cend(); ++it )
        std::cout << ' ' << *it;   // cannot modify *it

    std::cout << '\n';

// .crbegin() .crend() constant reverse iterator 
    std::array<int,6> myarray4 = {10, 20, 30, 40, 50, 60} ;

    std::cout << "myarray backwards:";
    for ( auto rit=myarray4.crbegin() ; rit < myarray4.crend(); ++rit )
        std::cout << ' ' << *rit;   // cannot modify *rit

    std::cout << '\n';

    // // sort(phan tu bat dau, phan tu ket thuc) HAM SAP XEP , co the sap xep o bat ki phan tu nao, khong nhat thiet phai sap xep ca mang
    // cout <<"Sap xep tang" << endl;
    // sort(arr.begin(),arr.end()); //HAM SAP XEP TANG
    // printArray(arr);

    // cout <<"Sap xep giam" << endl;
    // sort(arr.rbegin(),arr.rend()); //HAM SAP XEP TANG
    // printArray(arr);


}