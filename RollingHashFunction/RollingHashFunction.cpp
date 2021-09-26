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
        hash  = (hash  + ((s[i] - 'a' + 1) * pr)% mod) % mod;  // sum (s[i] - 'a' * p^i)
        pr = (pr * 31) % mod;    
    }
    
    return hash;
}

void blackBox1(string s)
{
    int pr1 = 1;
    int pr2 = 1;
    int mod = 10e9 + 7;
    int hash1 = 0;
    int hash2 = 0;
    pair<int, int>p;
    for(int i =0; i < s.size(); i++)
    {
        hash1  = (hash1  + ((s[i] - 'a' + 1) * pr1)% mod) % mod;  // sum (s[i] - 'a' * p^i)
        hash2  = (hash2  + ((s[i] - 'a' + 1) * pr2)% mod) % mod;  // sum (s[i] - 'a' * p^i)
        pr1 = (pr1 * 31) % mod;    
        pr2 = (pr2 * 37) % mod;  
    }
    p.first = hash1;
    p.second = hash2;
    
    cout << p.first << endl;
    cout << p.second << endl;
    return;
}

signed main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    string s;
    cin >> s;
    cout << blackBox(s) << endl;  // for "abc" ==> black box gives 2946

    cout << "BB2" << endl;
    blackBox1(s);
}
 
 