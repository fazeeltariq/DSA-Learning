#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef vector<int> vec;
typedef pair<int,int> pi;
#define f first
#define s second
#define pb push_back
int const MOD=1e9+7;
#define foo(i,a,b) for(int i=a;i<b;i++)
#define fastnuces ios::sync_with_stdio(0); cin.tie(0);

int fact(int n){
    if(n==0) return 1;
    int result=1;
    foo(i,1,n+1){
        result*=i;
    }
    return result;
}

int nCrusingFactorial(int n,int r){
    if(r==0 || r==n){
        return 1;
    }
    if(r>n){
        return 0;
    }
    int fn = fact(n);
    int fr = fact(r);
    int fnr = fact(n - r);
    int result = fn / (fr * fnr);

    return result;
}
signed main()
{
    int n,r;
    cin>>n>>r;
    cout<<fact(n);
    cout<<"\n"<<nCrusingFactorial(n,r);
}