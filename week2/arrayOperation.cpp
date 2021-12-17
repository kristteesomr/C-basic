#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime> // for time()
#include <string>
#define MAX 1000 // định nghĩa số phần tử mảng
using namespace std;

// khai báo prototype
void nhapMang(int arr[], int &n); // Ham random so // n thay doi sau moi lan su dung ham //tham so vao: 1 mang can nhap va so luong phan tu cua mang do 
void xuatMang(int arr[], int n); // Tham so vao: 1 mang can in ra va so luong phan tu cua mang do 
void saoChepMangMotChieu(int arrDest[], int arrSource[], int n); // Tham so vao: 1 mang dich muon paste, 1 mang nguon muon copy, so luong phan tu cua 2 mang do
int timKiemPhanTuDauTien(int arr[], int n, int x); // ham tim kiem phan tu, co tra ve so thu tu vi tri cua phan tu trong mang , khong tra ve -1
void hoanVi(int &a, int &b);
void sapXepTang(int arr[], int n); // Cho trước mảng myArray kích thước n. Hãy sắp xếp mảng a đó sao cho các phần tử có giá trị tăng dần.
// Sử dụng 2 biến i và j để so sánh tất cả cặp phần tử với nhau và hoán vị các cặp nghịch thế (sai thứ tự).
void themMotPhanTuVaoMang(int a[], int &n, int idx, int x); // Thêm phần tử x vào mảng myArray kích thước n tại vị trí idx. //&n vi sau ham nay n thay doi
void xoaMotPhanTuTrongMang(int a[], int &n, int idx); //Xóa một phần tử trong mảng a kích thước n tại vị trí vt //&n vi sau ham nay n thay doi


int main()
{
	int myArray[MAX]; // mảng myArray có MAX phần tử
	int nSize; // nSize là số phần tử được sử dụng, do user nhập

	// nhập xuất mảng tự động
	nhapMang(myArray, nSize);
	xuatMang(myArray, nSize);

/*su dung ham sao chep */

    int myArray2[MAX]; // mảng myArray2 có MAX phần tử
	
	// sao chép mảng myArray sang myArray2
	saoChepMangMotChieu(myArray2, myArray, nSize);

	// xuất mảng myArray2 sau khi sao chép
	cout << "myArray2: " << endl;
	xuatMang(myArray2, nSize);

/* su dung ham tim kiem */

    int x;
	cout << "Nhap phan tu x can tim: ";
	cin >> x;

	// tìm kiếm phần tử x đầu tiên trong mảng
	int idx = timKiemPhanTuDauTien(myArray, nSize, x);
	if (idx != -1)
		cout << "x nam tai vi tri thu " << idx << endl;

/* su dung ham sap xep */
    // sắp xếp mảng tăng
	sapXepTang(myArray, nSize);
    // xuất mảng myArray
	cout << "myArray: " << endl;
	xuatMang(myArray, nSize);

/* su dung ham them phan tu */
    // thêm 1 phần tử vào mảng
	int idx1;
	cout << "Nhap vi tri can them: ";
	cin >> idx1;

	int x1;
	cout << "Nhap gia tri can them: ";
	cin >> x1;
	themMotPhanTuVaoMang(myArray, nSize, idx1, x1);

	// xuất mảng sau khi thêm
	cout << "myArray: " << endl;
	xuatMang(myArray, nSize);

/* su dung ham xoa phan tu */
    // xóa một phần tử trong mảng tại vị trí idx
	int idx2;
	cout << "Nhap vi tri can xoa: ";
	cin >> idx2;

	xoaMotPhanTuTrongMang(myArray, nSize, idx2);

	// xuất mảng sau khi xóa
	cout << "myArray: " << endl;
	xuatMang(myArray, nSize);

	return 0;
}

// hàm nhập mảng tu dong random
void nhapMang(int arr[], int &n)
{
	// khởi tạo số ngẫu nhiên
	srand(time(NULL));

	cout << "Nhap so luong phan tu n : ";
	cin >> n;

	// khởi tạo ngẫu nhiên từng phần tử từ chỉ số 0 đến n – 1
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

// hàm xuất mảng
void xuatMang(int arr[], int n)
{
	// xuất từng phần tử cho mảng từ chỉ số 0 đến n – 1
	for (int i = 0; i < n; i++)
	{
		cout << "arr[" << i << "] = " << arr[i] << endl;
	}
}

// sao chép mảng nguồn sang mảng đích
void saoChepMangMotChieu(int arrDest[], int arrSource[], int n)
{
	for (int i = 0; i < n; i++)
	{
		arrDest[i] = arrSource[i];
	}
}

// tìm kiếm phần tử x đầu tiên trong mảng
int timKiemPhanTuDauTien(int arr[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == x)
			return i; // tra ve vi tri cua phan tu do
	}
	
	return -1;
}

// hoán vị giá trị 2 biến số
void hoanVi(int &a, int &b)
{
	int temp = a;
	a = b; 
	b = temp;
}

// sắp xếp mảng tăng dần bằng thuật toán interchange sort
void sapXepTang(int arr[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
				hoanVi(arr[i], arr[j]);
		}
	}
}

// thêm phần tử x vào mảng tại vị trí idx
/*“Đẩy” các phần tử bắt đầu tại vị trí idx sang phải 1 vị trí.
Đưa x vào vị trí idx trong mảng.
Tăng n lên 1 đơn vị.*/
void themMotPhanTuVaoMang(int a[], int &n, int idx, int x)
{
	if (idx >= 0 && idx <= n)
	{
		for (int i = n; i > idx; i--)
			a[i] = a[i - 1];
		a[idx] = x;
		n++;
	}
}

// xóa một phần tử trong mảng tại vị trí idx
/*
“Kéo” các phần tử bên phải vị trí idx sang trái 1 vị trí.
Giảm n xuống 1 đơn vị.
*/
void xoaMotPhanTuTrongMang(int a[], int &n, int idx)
{
	if (idx >= 0 && idx < n)
	{
		for (int i = idx; i < n - 1; i++)
			a[i] = a[i + 1];
		n--;
	}
}