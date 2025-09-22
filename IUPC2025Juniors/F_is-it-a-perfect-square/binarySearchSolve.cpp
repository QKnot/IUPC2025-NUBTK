#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define space " "
const int mod = 1e9 + 7;
auto solve = []()->void 
{
    int n;
    cin >> n;
    int low = 1, high = n;
    bool isPerfectSquare = false;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(mid * mid == n){
            isPerfectSquare = true;
            break;
        }
        else if(mid * mid < n){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << (isPerfectSquare ? "YES" : "NO") << endl;
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--){
        solve();
    }
    return 0;
}