#include <iostream>
#include <algorithm>
using namespace std;
int a[1000005];
 
int main() {
    int n;
    while (cin >> n){
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a+n);
        for (int i = 0; i < n-1; i++){
            cout << a[i] << " ";
        }
        cout << a[n-1] << "\n";
    }
}
