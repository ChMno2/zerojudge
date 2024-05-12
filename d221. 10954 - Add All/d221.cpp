#include <iostream>
#include <queue>
using namespace std;
int main() {
    int n;
    while (cin >> n && n != 0) {
        priority_queue<long long int, vector<long long int>, greater<long long int>> pq;
        long long int sum = 0;

        // 將數字加入最小堆
        for (int i = 0; i < n; i++) {
            long long int num;
            cin >> num;
            pq.push(num);
        }

        // 每次從最小堆中取出兩個最小的數字相加，並將結果再次放入最小堆
        while (pq.size() > 1) {
            long long int first = pq.top();
            pq.pop();
            long long int second = pq.top();
            pq.pop();
            long long int t = first + second;
            sum += t;
            pq.push(t);
        }

        cout << sum << endl;
    }

    return 0;
}
