#include<iostream>
using namespace std;
#define int long long

int32_t main() {
    int n;
    cin >> n;
    int x, ans = 0;
    int arr[n]={0};
    for(int i = 0; i < n; i++) {
        cin >> x;
        arr[i]=x;
            ans = max(ans, x * (n / (i + 1)) );
    }
    cout << ans << endl;
}