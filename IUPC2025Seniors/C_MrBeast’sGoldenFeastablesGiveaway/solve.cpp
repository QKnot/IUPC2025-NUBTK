#include <bits/stdc++.h>
using namespace std;

#ifdef LOCAL
#include "debug.h"
#else
#define dbg(...)
#endif

template <typename T, typename U>
T realTrue(T lo, T hi, U f) {
    for (int i = 0; i < 100; ++i) {
        T mid = 0.5 * (hi + lo);
        f(mid) ? lo = mid : hi = mid;
    }
    return lo;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    
    int n, k;    
    cin >> n >> k;
    vector<int> a(n);
    for (auto& z : a) cin >> z;

    auto ans = realTrue(0.0, 2E9, [&](auto len) {
        int c = 0;
        for (auto& z: a) c += z/len;
        return c >= k;
    });
    cout << fixed << setprecision(15) << ans << "\n";

    return 0;
}