#include<bits/stdc++.h>
using namespace std;
#define int long long
static map<string, string> highValyrian = {
    {"Fire", "Dracarys"},
    {"Serve", "Dohaeras"},
    {"Calm", "Lykiri"},
    {"Wait", "Umbas"},
    {"Focus", "Rybas"},
    {"Come", "Mazis"},
    {"Forward", "Naejot"}
};
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int test;
    cin >> test;
    while(test--){
        string s;
        cin >> s;
        if (highValyrian.contains(s)){
            cout << highValyrian[s] << endl;
        }else {
            cout << "Skoros?" << endl;
        }
    }
    return 0;
}