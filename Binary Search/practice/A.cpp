#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define int long long

typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<string> vs;
typedef vector<char> vc;
typedef vector<pair<int,int>> vpi;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;
typedef unordered_map<int, int> unmap;
typedef map<int, int> uno;
typedef set<int> sett;
typedef unordered_set<int> unset;
typedef multiset<int> msi;

#define f first
#define s second
#define pb push_back
#define po pop_back
#define foo(i,a,b) for(int i=a;i<b;i++)
#define rfoo(i,a,b) for(int i=a;i>=b;i--)
#define input(v) for(auto &x : v) cin >> x
#define print(v) for(auto x : v) cout << x << " "; cout << '\n'
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9+7;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }

ll power(ll a, ll b) {
    ll res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

ll modexp(ll a, ll b, ll mod) {
    ll res = 1;
    a %= mod;
    while (b) {
        if (b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int digitCount(ll n, int base = 10) {
    return n ? (int)(log(n) / log(base)) + 1 : 1;
}

bool isprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

void sieve(int n, vector<bool> &isPrime) {
    isPrime.assign(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i)
        if (isPrime[i])
            for (int j = i * i; j <= n; j += i)
                isPrime[j] = false;
}

vi factors(int n) {
    vi res;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            res.pb(i);
            if (i != n / i) res.pb(n / i);
        }
    }
    sort(all(res));
    return res;
}

int getbit(ll n, int b)      { return (n >> (b - 1)) & 1; }
ll setbit(ll n, int b)       { return n | (1LL << (b - 1)); }
ll resetbit(ll n, int b)     { return n & ~(1LL << (b - 1)); }
ll togglebit(ll n, int b)    { return n ^ (1LL << (b - 1)); }
bool ispoftwo(ll n)          { return n > 0 && !(n & (n - 1)); }
int countSetBits(ll n)       { return __builtin_popcountll(n); }

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)

signed main() 
{
    fastio;
    
    
    return 0;
}
