#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
const int mod = 1e9 + 7;
auto QKnot = []()->void 
{
    int n;
    cin >> n; 
    if (n == 3 || n == 5 || n == 17 || n == 257 || n == 65537) {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    bool bl = true;
    bl?[]()->void
    {
        int test;
        cin >> test;
        while(test--) QKnot();
    }():QKnot();
    return 0;
}