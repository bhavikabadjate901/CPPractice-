// Rooling Hash Function
// TLE 
// MLE
// String Problems

#include<bits/stdc++.h>
using namespace std;
#define int long long


int blackBox(string s)
{
    int pr = 1;
    int mod = 10e9 + 7;
    int hash = 0;

    for(int i =0; i < s.size(); i++)
    {
        hash  = (hash  + ((s[i] - 'a' + 1) * pr)% mod) % mod;
        pr = (pr * 31) % mod;
    }
    
    return hash;
}

signed main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    cout << blackBox(s);  // for "abc" ==> black box gives 2946
}
 
 