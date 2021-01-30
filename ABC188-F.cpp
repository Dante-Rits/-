#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define rep1(i,n) for(int i=1;i<=(int)n;i++)
#define sp(n) cout << fixed << setprecision(n)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
typedef long long ll;
using namespace std;
ll x,y;
map<ll,ll> mp;
ll dfs(ll tmp){
    if(x>=tmp)return x-tmp;
    if(mp[tmp]!=0)return mp[tmp];
    ll a=tmp/2*2,b=(tmp+1)/2*2;
    ll res=1e18;
    chmin(res,tmp-x);
    chmin(res,abs(tmp-a)+dfs(a/2)+1);
    chmin(res,abs(tmp-b)+dfs(b/2)+1);
    return mp[tmp]=res;
}
int main(void){
    cin>>x>>y;
    ll res=dfs(y);
    cout<<res<<endl;
}