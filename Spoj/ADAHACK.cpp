/*
	Template by Siddhartha Mishra(sid_m97)
*/
#include <bits/stdc++.h>

using namespace std;

#define inf (int)1e9
#define eps 1e-9
const double pi = acos(-1.0);
#define MOD 1000000007

#define mp make_pair
#define pb push_back
#define ff first
#define ss second

#define ll long long
#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vl vector<ll>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<pii>
#define vll vector<pll>
#define mpii map<int,int>
#define seti set<int>
#define mseti multiset<int>

#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >

#define loop(i, a, b, x) for(ll i = a;i <b; i += x)
#define f(i,a,b) loop(i,a,b,1)
#define rep(i,n) f(i,0,n)
#define repv(i,a) rep(i,a.size()) 
#define loopr(i,a,b,x) for(ll i = a; i>=b;i--)
#define fr(i,a,b) loopr(i,a,b,1)
#define mem(a,b) memset(a, (b), sizeof(a))
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define SORT(v) sort(v.begin(),v.end());
#define inc(A, B, C)  A <= B && B <= C

/* important functions */

ll mod(ll a, ll b)
{ return (a%b+b)%b; }

ll gcd(ll a, ll b) {
  ll r, i;
  while(b!=0){
    r = a % b;
    a = b;
    b = r;
  }
  return a;
}




ll fast_exp(int base, int exp ,int mod=MOD) {
    ll res=1;
    while(exp>0) {
       if(exp%2==1) res=(res*base)%mod;
       base=(base*base)%mod;
       exp/=2;
    }
    return res%mod;
}

void prvec(vl a){
  rep(i,a.size()) cout<<a[i]<<" ";
  cout<<endl;
}

void prvec(vi a){
  rep(i,a.size()) cout<<a[i]<<" ";
  cout<<endl;
}

/* user define functions specific to problem */



/* main function */

int main() 
{
	std::ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0); 
  while(!cin.eof()){
    vl a(6),d(5),c(5);
    rep(i,6) cin>>a[i];
    f(i,1,6) d[i-1] = a[i] - a[i-1];
    c[0] = a[0];
    f(1,1,5) c[i] = d[i-1];
    
  }
	return 0;
}

