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
    int x = sqrt(n);
    cout << ((x * x == n) ? "YES" : "NO") << endl;
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