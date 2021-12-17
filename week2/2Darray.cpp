#include <iostream>
#include <cstdlib> // for srand() and rand()
#include <ctime> // for time()
using namespace std;

// định nghĩa số phần tử mảng
#define ROW 100
#define COL 100

// khai báo prototype
void nhapMang(int mt[][COL], int &m, int &n);
void xuatMang(int mt[][COL], int m, int n);
int tongDong(int mt[][COL], int n, int d); // cho trước ma trận mt, kích thước mxn. Tính tổng các phần tử trên dòng d, cột c
int tongCot(int mt[][COL], int m, int c); // cho trước ma trận mt, kích thước mxn. Tính tổng các phần tử trên dòng d, cột c
int timMax(int mt[][COL], int m, int n); // Cho trước ma trận mt, kích thước mxn. Tìm giá trị lớn nhất trong ma trận mt (gọi là max)

int main()
{
	int mt[ROW][COL]; // mảng myArray có MAX phần tử
	int nRow, nCol; // số phần tử dòng và cột được sử dụng

	// nhập xuất mảng tự động
	nhapMang(mt, nRow, nCol);
	xuatMang(mt, nRow, nCol);

/*
Su dung ham tongDong tongCot
*/

   // tính tổng dòng d, cột c
	int d;
	cout << "Nhap dong can tinh tong: ";
	cin >> d;
	cout << "Tong dong: " << tongDong(mt, nCol, d) << endl;

	// tính tổng cột c
	int c;
	cout << "Nhap cot can tinh tong: ";
	cin >> c;
	cout << "Tong dong: " << tongCot(mt, nRow, c) << endl;

/*
Su dung ham timMax
*/
    // tìm max
	int max = timMax(mt, nRow, nCol);
	cout << "Max = " << max << endl;

	return 0;
}

// hàm nhập mảng
void nhapMang(int mt[][COL], int &m, int &n)
{
	// khởi tạo số ngẫu nhiên
	srand(time(NULL));

	cout << "Nhap so dong : ";
	cin >> m;
	cout << "Nhap so cot : ";
	cin >> n;

	// khởi tạo mảng ngẫu nhiên từ [0][0] đến [m-1][n-1].
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			mt[i][j] = rand() % 100;
		}
	}
}

// hàm xuất mảng
void xuatMang(int mt[][COL], int m, int n)
{
	// xuất từng phần tử cho mảng
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mt[i][j] << "\t";
		}
		cout << endl;
	}
}

// tính tổng trên dòng d
/*
duyệt ma trận và cộng dồn các phần tử có tọa độ (dòng, cột) thỏa yêu cầu
*/
int tongDong(int mt[][COL], int n, int d)
{
	int sum(0);
	for (int j = 0; j < n; j++) // Duyệt các cột
		sum += mt[d][j];

	return sum;
}

// tính tổng trên cột c
int tongCot(int mt[][COL], int m, int c)
{
	int sum(0);
	for (int i = 0; i < m; i++) // Duyệt các dòng
		sum += mt[i][c];

	return sum;
}

// tìm giá trị max của mảng 2 chiều
/*
Giả sử giá trị max hiện tại là giá trị phần tử đầu tiên mt[0][0]
Lần lượt kiểm tra các phần tử còn lại để cập nhật max.
*/
int timMax(int mt[][COL], int m, int n)
{
	int i, j, max;
	max = mt[0][0];
	for (i = 0; i < m; i++)
		for (j = 0; j < n; j++)
			if (mt[i][j] > max)
				max = mt[i][j];
	return max;
}