/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((long long) (x).size())
#define len(x) ((long long) (x).length())
#define rep(i,a,b) for(long long i = (a); i <= (b); i++)
#define rrep(i,a,b) for (long long i = (a); i >= b; i--)
#define fill(x, y) memset(x, y, sizeof(x))
#define present(t, x) (t.find(x) != t.end())
#define prec(n) fixed<<setprecision(n)
#define uni(a) (a).erase(unique(all(a)), (a).end())
#define bit(n, i) (((n) >> (i)) & 1)
#define bitcount(n) __builtin_popcountll(n)
#define db(x) cerr << #x << " = " << (x) << " ";
#define endln cerr << "\n";
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
typedef vector<string> vs;
typedef long long ll;
typedef vector<ll> vll;
typedef double D;
typedef long double LD;
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
const ll inf = 1e9;
const ll linf = 1e18; 
const double eps = 1e-9;
const double pi = acos(-1.0);
const ll  MOD =  1e9+7;
/* important functions */
inline ll mod(ll a,ll b=MOD) { return (a%b+b)%b; }
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll xdiv(ll a,ll b){ if(a%b == 0) return a/b; else return a/b + 1;}
inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
inline ll inv(ll a, ll m = MOD) { return fpow(a,m-2,m);}
template <typename T> void prnt(T beg, T end){ for(T it = beg; it != end; it++) cout<<*it<<" "; cout<<endl;}

/* Declare variables here*/
ll T;
const ll maxn = 5e6;

ll n,m,o=1;
ll use[maxn],tcol[maxn],col[maxn],first[maxn],last[maxn];
struct node{
    ll v;
    ll c;

};
vector<node> f[maxn];
void dfs(node p, node s){
    use[s.v] = 1;
    for (auto& vert: f[s.v]){
        if (use[vert.v]==0)
        {
            use[vert.v]=1;
            if(first[s.v]==-1) first[s.v] = o;
            last[vert.v] = o;
            col[o] = vert.c;
            o++;
            dfs(s, vert);
        }

    }
    if(p.v != 0) {
        if(first[s.v]==-1) first[s.v] = o;
        last[p.v] = o;
        col[o] = s.c;
        o++;
    }

}

/* user define functions specific to problem */
/* solve here */
void solve()
{ 
   cin>>n>>m;
   rep(i,1,maxn-1) first[i] = -1, last[i] = -1;
   rep(i,1,n) cin>>tcol[i];
   rep(i,1,n-1){
        int u,v;
        scanf("%d%d",&u,&v);
        f[u].pb({v,tcol[v]});
        f[v].pb({u,tcol[u]});
    }
    dfs({0,0}, {1,0});
    prnt(col,col+20);
   
}
/* main function */
int main() 
{
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  //cin>>T;
  //while(T--)
  solve();
  return 0;
}
