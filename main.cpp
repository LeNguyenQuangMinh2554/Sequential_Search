#include <iostream>
using namespace std;
// thuật toán tìm kiếm tuần tự, tức là duyệt qua danh sách phần tử từ đâu đến cuối,
// mỗi lần duyệt qua một phần tử, so sánh nó với key - hay từ khóa tìm kiếm, nếu đúng,
// xuất vị trí phần tử đó ra, nếu sai, trả về -1

int linearSearch(int arr[], int k, int n) { // tìm kiếm tuần tự cổ điển
for(int i =0;  i<n; i++) {
    if (arr[i] == k) {
        return i;
    }
}
return -1;
}
int main() {
    int k, n;
  int arr[n];

  int index;

  cout << "Nhap vao so luong phan tu mang: ";
  cin >> n;
  cout << "Nhap vao lan luot cac phan tu: ";
  for(int i=0; i<n; i++) {
      cin >> arr[i];
  }
  cout << "Nhap vao phan tu can tim kiem vi tri: ";
  cin >> k;
  index = linearSearch(arr, k, n);
  if(index < 0) {
      cout << "Khong  tim thay phan tu trong mang. " << endl;
  } else {
      cout << "Vi tri cua phan tu " << k << " trong mang la: " << index << endl;
  }
    return 0;
}


// ngoài ra, ta còn có biển thể của thuật toán này, đó là biển thể thuật toán tìm kiếm lính canh
// dưới đây làm thuật toán tìm kiếm lính canh:

int sentielSearch(int arr[], int k, int n) {
    arr[n] = k;
    int i = 0;
    while (arr[i] != k) {
        i = i+1;
    }
    if(i<n) {
        return i;
    } else {
        return -1;
    }
}