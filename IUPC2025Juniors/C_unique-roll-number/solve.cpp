#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    set<int> set_;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        set_.insert(a);
    }
    cout << (set_.size() == n ? "YES" : "NO") << endl;
    return 0;
}