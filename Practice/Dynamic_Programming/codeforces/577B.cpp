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
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll xdiv(ll a,ll b){ if(a%b == 0) return a/b; else return a/b + 1;}
inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
inline ll inv(ll a, ll m = MOD) { return fpow(a,m-2,m);}
/* important functions */
inline ll mod(ll a,ll b=MOD) { return (a%b+b)%b; }
template <typename T> void prnt(T beg, T end){ for(T it = beg; it != end; it++) cout<<*it<<" "; cout<<endl;}

/* Declare variables here*/
ll T;
const ll maxn = 2e6;
const ll dmaxn = 2e3;
ll a[maxn];
ll n,m; 
int can[dmaxn][dmaxn];

int go(ll s, ll i)
{
    if(i > n) return 0;
    if(s == -1) s = a[i]%m;
    if(can[s][i] != - 1) return can[s][i];
    can[s][i] = go((s+a[i])%m,i+1);
    can[s][i] |= go(s,i+1);
    db(s)db(i) db(can[s][i])endln;
    return can[s][i];  
}

/* user define functions specific to problem */
/* solve here */
void solve()
{ 
    cin >> n >> m;
    if(n > m) {
        cout << "YES";
        return;
    }
    rep(i,0,dmaxn-1) rep(j,0,dmaxn-1) can[i][j] = -1;
    rep(i,1,n) {
      cin >> a[i];
      can[a[i]%m][i] = 1;
    }
    go(-1,1);
    rep(i,1,n) {
        if(can[0][i] == 1) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";      
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
