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
       double x, c;
       cin >> x >> c;
       double v_sound = (331.5 + (double)(0.6 * c));
       double v_light = 3 * 1e8;
       double s = (v_light * x * v_sound) / (v_light - v_sound);
       cout << setprecision(10) << s / 1000 << endl;
    }
    return 0;
}