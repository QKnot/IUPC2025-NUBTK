#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--){
       int n;
       cin >> n;
       cout << n * (n + 1) / 2 << endl;
    }
    return 0;
}