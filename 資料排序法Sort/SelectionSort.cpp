#include <iostream>
#include <climits> // 包含 INT32_MAX 的定義

using namespace std;

#define ll long long

// 選擇排序函數
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = INT32_MAX;
        int index = i;

        // 找到未排序部分中的最小值
        for (int f = i; f < n; f++)
        {
            if (arr[f] < min)
            {
                min = arr[f];
                index = f;
            }
        }

        // 交換最小值和當前位置的值
        if (index != i)
        {
            arr[index] = arr[i];
            arr[i] = min;
        }
    }
}

// 輸出陣列函數
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
    cin >> n;
    int a[n];

    // 讀取 n 個元素並存入陣列 a
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 執行選擇排序
    selectionSort(a, n);

    // 顯示排序後的陣列
    printArray(a, n);

    return 0;
}
