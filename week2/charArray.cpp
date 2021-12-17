#include <iostream>
#include <cstring> // char Array khac <string> cho chuoi ki tu
using namespace std;

int main()
{

//cin.getline
	char szAddress[20];

	cout << "Nhap dia chi: ";
	cin.getline(szAddress, 20); //Hàm std::cin.getline() sẽ đọc tất cả các ký tự từ bàn phím (bao gồm khoảng trắng ‘ ‘) cho đến khi gặp ký tự enter ‘\n’ (mặc định).
    //Nếu số lượng ký tự nhập vào lớn hơn độ dài truyền vào hàm, mọi ký tự dư thừa sẽ bị loại bỏ.

	cout << "Dia chi cua ban la: " << szAddress << endl;

// STRLEN & SIZEOF
	char szTeam[20] = "Kteam"; // mảng có 20 phần tử (5 ký tự thường, 15 ký tự '\0')
	cout << "Team cua tui: " << szTeam << endl;
	cout << szTeam << " co " << strlen(szTeam) << " ky tu." << endl;
	cout << szTeam << " co " << sizeof(szTeam) << " phan tu trong mang." << endl;

//STRLWR & STRUPR
	char szString1[] = "Hello Howkteam.com!";
	char szString2[] = "Hello Howkteam.com!";

	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;
	
	strlwr(szString1); // chu thuong
	strupr(szString2); // chu in hoa
	cout << "s1: " << szString1 << endl;
	cout << "s2: " << szString2 << endl;

//STRCPY
	char szSource[] = "Kteam";
	char szDest[20];

	// sao chép chuỗi szSource sang chuỗi szDest
	strcpy(szDest, szSource); 
	cout << "Source: " << szSource << endl;
	cout << "Dest: " << szDest << endl;

//STRCAT
	// nối chuỗi
	strcat(szDest, " "); // "Hello "
	strcat(szDest, szSource); // "Hello Howkteam.com!"
	cout << "Dest: " << szDest << endl;

//STRCMP
/*Để so sánh hai chuỗi ký tự s1 và s2 (phân biệt hoa thường), bạn có thể sử dụng hàm strcmp().

Giá trị trả về nhỏ hơn 0 nếu: chuỗi s1 < chuỗi s2
Giá trị trả về bằng 0 nếu: chuỗi s1 == chuỗi s2
Giá trị trả về lớn hơn 0 nếu: chuỗi s1 > chuỗi s2
*/
	// so sánh 2 chuỗi
	int result = strcmp(szString1, szString2);
	if (result < 0)
		cout << "s1 < s2" << endl;
	else if (result > 0)
		cout << "s1 > s2" << endl;
	else
		cout << "s1 == s2" << endl;



//STRSTR 
/*
Để tìm vị trí xuất hiện đầu tiên của một chuỗi (s2) trong một chuỗi khác (s1), bạn có thể sử dụng hàm strstr().
Nếu tìm thấy: trả về con trỏ đến vị trí xuất hiện đầu tiên của chuỗi s2 trong chuỗi s1.
Nếu không tìm thấy: trả về NULL.
*/

	if (strstr(szString1, szString2) != NULL)
		cout << "Tim thay " << szString2 << " trong " << szString1 << endl;
	else
		cout << "Khong tim thay!" << endl;
	return 0;
}