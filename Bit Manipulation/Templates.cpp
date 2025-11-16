#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

inline int getbit(int n,int b)      { return (n >>(b-1))&1;}
inline int setbit(int n,int b)      { return n | (1<<(b-1)); }
inline int resetbit(int n,int b)    { return n & ~(1<<(b-1)); }
inline int togglebit(int n,int b)   { return n^(1<<(b-1)); }
inline int getlsb(int n)             { return n & 1; }
inline int getmsb(int n)             { return n ? 1 << (31 - __builtin_clz(n)):0; }
inline bool ispoftwo(int n)      { return n > 0 && !(n & (n-1));}
inline int rightmostSetBitPos(int n) { return n ? __builtin_ctz(n)+1 : -1; }
inline int countSetBits(int n)       { return __builtin_popcount(n); }

ll power(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}
inline int digitCount(ll n, int base = 10) {
    return n ? (int)(log(n) / log(base)) + 1 : 1;
}

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> vec (n);
        for(int i=0;i<n;i++) cin>>vec[i];
        int result=vec[0];
        for(int i=1;i<n;i++){
            result = result & vec[i];
        }
        cout<<result<<"\n";
    }
    
    return 0;
}
