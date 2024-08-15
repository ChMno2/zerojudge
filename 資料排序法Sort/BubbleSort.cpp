#include <iostream>
using namespace std;

// Bubble Sort function
void bubbleSort(int arr[], int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            // 如果前一個元素大於後一個元素，則交換
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

int main()
{
    int n;
    cin >> n; // 讀取陣列的大小
    int a[n]; // 宣告大小為 n 的整數陣列

    // 使用 for 迴圈讀取 n 個元素並存入陣列 a
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 執行 Bubble Sort
    bubbleSort(a, n);

    // 顯示排序後的最終陣列
    printArray(a, n);

    return 0;
}
