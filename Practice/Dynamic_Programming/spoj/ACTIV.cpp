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
const ll  MOD =  1e8;
/* important functions */
inline ll mod(ll a,ll b=MOD) { return (a%b+b)%b; }
inline ll gcd(ll a, ll b) {ll r; while (b) {r = a % b; a = b; b = r;} return a;}
inline ll xdiv(ll a,ll b){ if(a%b == 0) return a/b; else return a/b + 1;}
inline ll fpow(ll n, ll k, int p = MOD) {ll r = 1; for (; k; k >>= 1) {if (k & 1) r = r * n % p; n = n * n % p;} return r;}
inline ll inv(ll a, ll m = MOD) { return fpow(a,m-2,m);}
template <typename T> void prnt(T beg, T end){ for(T it = beg; it != end; it++) cout<<*it<<" "; cout<<endl;}

/* Declare variables here*/
ll T;
  ll n;
const ll maxn = 4e5;
struct node
{
    ll beg;
    ll end;
};

ll dp[maxn][2];
node arr[maxn];
 ll flag = 1;  

bool mycmp(node &a, node &b)
{   
    return(a.end < b.end);
}

ll previndex(ll ind)
{
    ll l = 1;
    ll r = ind - 1;
    while(l < r)
    {
        ll mid = (l+r+1)>>1;
        if(arr[mid].end <=arr[ind].beg) l = mid;
        else r = mid-1;
    }
    if(arr[l].end <= arr[ind].beg) return l;
    return -1;
}
/* user define functions specific to problem */
/* solve here */
void solve()
{
   cin>>n;
   if(n == -1) { flag = 0; return; }
   rep(i,1,n) cin>>arr[i].beg>>arr[i].end, dp[i][0] = 0, dp[i][1] = 0;
   sort(arr+1,arr+n+1,mycmp); 
   dp[1][1] = 1;
   dp[1][0] = 0;
   rep(i,2,n){
       ll prev = previndex(i);    
       if(prev != -1) dp[i][1] = mod(1 + mod(dp[prev][0]) + mod(dp[prev][1]));
       else dp[i][1] = 1;
       dp[i][0] = mod(mod(dp[i-1][0]) + mod(dp[i-1][1]));
    //   db(i)db(prev)db(dp[i][0]) db(dp[i][1])endln; 
   }
   
   ll ans = mod(mod(dp[n][0])+mod(dp[n][1]));
   string res = to_string(ans);
   rep(i,1,8-len(res))cout<<'0';
   cout<<res<<endl; 
}
/* main function */
int main() 
{
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 
  while(flag)solve();
  return 0;
}
