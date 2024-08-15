#include <iostream>
#define ll long long

using namespace std;

// Insertion Sort function
void insertionSort(int arr[], ll n)
{
    for (ll i = 1; i < n; i++)
    {
        for (ll f = i - 1; f >= 0; f--)
        {
            if (arr[f] > arr[f + 1])
            {
                // 交換 arr[f] 和 arr[f + 1]
                int temp = arr[f];
                arr[f] = arr[f + 1];
                arr[f + 1] = temp;
            }
            else
            {
                break; // 如果沒有發生交換，跳出內層迴圈
            }
        }
    }
}

// 輸出陣列函數
void printArray(int arr[], ll n)
{
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}
int main()
{
    ll n;
    cin >> n;
    int a[n]; // 宣告大小為 n 的整數陣列

    // 讀取 n 個元素並存入陣列 a
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 執行插入排序
    insertionSort(a, n);

    // 顯示排序後的陣列
    printArray(a, n);

    return 0;
}
