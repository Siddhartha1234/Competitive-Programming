/*
  Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>
#define fi first
#define se second
#define mpa make_pair
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
const ll maxn = 2e5;


/* user define functions specific to problem */
/* solve here */
void solve()
{ 
   string s,res;
   cin.ignore();
   getline(cin,s);
   int ind = 0;
   ll a = 0, b = 0, c = 0, d = 0, e = 0;
   int flag = 0;
   while(ind < len(s)){
       if(ind < len(s) - 1 && s[ind] == '@' && s[ind+1] == '*'){
            ind += 2;
            while(ind < len(s) - 1) {
                if(s[ind] == '*' && s[ind+1] == '@'){
                    ind += 2;
                    break;
                }
                ind++;
            }
       }
       else {
          res += s[ind];
          ind++;  
       }
   }
   //cout<<res<<endl;
   int balanced = 1;
   ll sp = 0;
   rep(i,0,len(res)-1){
       if(res[i] == '(') a++;
       else if(res[i] == '{') b++;
       else if(res[i] == '[') c++;
       else if(res[i] == '<') d++;
       else if(res[i] == '/') e++;
       else if(res[i] == ')') a--;
       else if(res[i] == '}')b--;
       else if(res[i] == ']')c--;
       else if(res[i] == '>')d--;
       else if(res[i] == '\\')e--;
   }
   if(a != 0 || b != 0 || c != 0 || d != 0 || e != 0) balanced = 0;
   if(balanced) cout<<"True"<<endl;
   else cout<<"False"<<endl;
}
/* main function */
int main() 
{
  //std::ios::sync_with_stdio(false);
  //cin.tie(0);
  //cout.tie(0); 
  cin>>T;
  while(T--)
  solve();
  return 0;
}
