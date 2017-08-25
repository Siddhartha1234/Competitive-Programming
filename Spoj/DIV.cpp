#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vf vector<float>
#define vs vector<string>
#define vl vector<ll>

#define loop(i, a, b, x) for(ll i = a;i <b; i += x)
#define f(i,a,b) loop(i,a,b,1)
#define rep(i,n) f(i,0,n)
#define repv(i,a) rep(i,a.size()) 
#define loopr(i,a,b,x) for(ll i = a; i>=b;i--)
#define fr(i,a,b) loopr(i,a,b,1)
#define repr(i,n) fr(i,n-1,0)
#define repvr(i,a) repr(i,a.size())
#define mem(a,b) memset(a, (b), sizeof(a))
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define SORT(v) sort(v.begin(),v.end());
#define inc(A, B, C)  A <= B && B <= C

/* user define functions specific to problem */
vl sieveOfEratosthenes(int N)
{
    vector <bool> prime(N+1, false);
    vl s(N+1,0);
    for (ll i=2; i<=N; i+=2)
        s[i] = 2;
 
    for (ll i=3; i<=N; i+=2)
    {
        if (prime[i] == false)
        {
            s[i] = i;
            for (ll j=i; j*i<=N; j+=2)
            {
                if (prime[i*j] == false)
                {
                    prime[i*j] = true;
                    s[i*j] = i;
                }
            }
        }
    }
    return s;
}

/* solve here */
void solve()
{
  vl s = sieveOfEratosthenes(1000000);
  ll counter = 0;
  f(i,2,1000001){  
    ll num = i;
    ll curr = s[num];  
    ll cnt = 1;
    ll prod = 1;
    while (num > 1)
    {
        num /= s[num];
        if (curr == s[num])
        {
            cnt++;
            continue;
        }
        prod *= (cnt+1);
        curr = s[num];
        cnt = 1;
    }
    }
    num = prod;
    ll divcnt = 0;
    curr = s[num];  
    cnt = 1;
    int flag = 0;
    while (num > 1)
    {
        num /= s[num];
        if (curr == s[num])
        {
            cnt++;
            continue;
        }
        divcnt++;
        if(divcnt <= 2)
        {
          if(cnt > 1) {
            flag =1;
            break;
          } 
        }
        else
        {
          flag =1;
          break;
        }
        curr = s[num];
        cnt = 1;  
      
    }
    if(!flag && divcnt ==2){
      counter = (counter + 1)%9;
      if(counter==0)cout<<i<<endl;
    }
  }
      
}


/* main function */

int main() 
{
  std::ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0); 

  solve();

  return 0;
}