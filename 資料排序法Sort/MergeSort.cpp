#include <iostream>
#include <vector>

using namespace std;

#define ll long long

// 合併兩個已排序的子陣列
void merge(int left, int mid, int right, vector<int> &array)
{
    vector<int> temp(right - left + 1);
    int leftIndex = left;
    int rightIndex = mid + 1;
    int tempIndex = 0;

    // 合併兩個子陣列
    while (leftIndex <= mid && rightIndex <= right)
    {
        if (array[leftIndex] <= array[rightIndex])
        {
            temp[tempIndex++] = array[leftIndex++];
        }
        else
        {
            temp[tempIndex++] = array[rightIndex++];
        }
    }

    // 複製左側剩餘元素
    while (leftIndex <= mid)
    {
        temp[tempIndex++] = array[leftIndex++];
    }

    // 複製右側剩餘元素
    while (rightIndex <= right)
    {
        temp[tempIndex++] = array[rightIndex++];
    }

    // 將合併後的結果複製回原始陣列
    for (int i = 0; i < temp.size(); i++)
    {
        array[left + i] = temp[i];
    }
}

// 合併排序函數
void mergeSort(int left, int right, vector<int> &array)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(left, mid, array);
    mergeSort(mid + 1, right, array);
    merge(left, mid, right, array);
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);

    // 讀取 n 個元素並存入陣列 a
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // 執行 Merge Sort
    mergeSort(0, n - 1, a);

    // 顯示排序後的陣列
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';

    return 0;
}
