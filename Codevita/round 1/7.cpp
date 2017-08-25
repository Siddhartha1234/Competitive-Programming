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
const ll maxn = 100;
ll dp[maxn];

/* user define functions specific to problem */
/* solve here */
void solve()
{ 
   string s;
   cin>>s;
   s = '0' + s;
   dp[1] = 1;
   ll n = len(s);
   rep(i,1,len(s)) {
       if(s[i] == 'R'){
           ll ind = i+1;
           int r = 0, y = 0, b = 0;
           while(ind <= n){
               if(!r && s[ind] == 'R') {
                   dp[ind] += dp[i];
                   r = 1;
               }
               if(!y && s[ind] == 'Y'){
                   dp[ind] += dp[i];
                   y = 1;
               }
               if(!b && s[ind] == 'B'){
                   dp[ind] += dp[i];
                   b = 1;
               }
               if(r && y && b) break;
               ind++;
           }  
       }
       else if(s[i] == 'G'){
           ll ind = i+1;
           int g = 0, b = 0, o = 0;
           while(ind <= n){
               if(!g && s[ind] == 'G') {
                   dp[ind] += dp[i];
                   g = 1;
               }
               if(!o && s[ind] == 'O'){
                   dp[ind] += dp[i];
                   o = 1;
               }
               if(!b && s[ind] == 'B'){
                   dp[ind] += dp[i];
                   b = 1;
               }
               if(g && o && b) break;
               ind++; 
           }
       }
       else if(s[i] == 'Y'){
           ll ind = i+1;
           int r = 0, y = 0, g = 0;
           while(ind <= n){
               if(!r && s[ind] == 'R') {
                   dp[ind] += dp[i];
                   r = 1;
               }
               if(!y && s[ind] == 'Y'){
                   dp[ind] += dp[i];
                   y = 1;
               }
               if(!g && s[ind] == 'G'){
                   dp[ind] += dp[i];
                   g = 1;
               }
               if(r && y && g) break;
               ind++; 
           }
       }
       else if(s[i] == 'B'){
           ll ind = i+1;
           int o = 0, g = 0, b = 0;
           while(ind <= n){
               if(!o && s[ind] == 'O') {
                   dp[ind] += dp[i];
                   o = 1;
               }
               if(!g && s[ind] == 'G'){
                   dp[ind] += dp[i];
                   g = 1;
               }
               if(!b && s[ind] == 'B'){
                   dp[ind] += dp[i];
                   b = 1;
               }
               if(o && g && b) break;
                ind++;
           }
       }
       else if(s[i] == 'O'){
           ll ind = i+1;
           int r = 0, o = 0, y = 0;
           while(ind <= n){
               if(!r && s[ind] == 'R') {
                   dp[ind] += dp[i];
                   r = 1;
               }
               if(!o && s[ind] == 'O'){
                   dp[ind] += dp[i];
                   o = 1;
               }
               if(!y && s[ind] == 'Y'){
                   dp[ind] += dp[i];
                   y = 1;
               }
               if(o && r && y) break;
               ind++; 
           }
       }
   }
   //prnt(dp+1,dp+10);
   ll lf = max(len(s)-5,1ll);
   //cout<<dp[lf]<<endl;
   ll ans = 0;
   rep(curr,lf,len(s)) ans += dp[curr];
   cout<<ans<<endl;       
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
