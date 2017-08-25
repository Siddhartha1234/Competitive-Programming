int N; 
int t[4*N];
int lazy[4*N];

ll merge(ll a,ll b, int flag){
    if(flag) return a|b;
    else return a ^ b;
}
void build(int node, int st, int end, int flag){
  if(st==end){
    t[node]=1ll << color[v[st]]; 
    return;
  }
  else {
    int mid = (st+end)>>1;
    build(node<<1,st,mid);
    build(node<<1|1,mid+1,end);
    t[node]=merge(t[node<<1],t[node<<1]|1,!flag);
  }
}

void update(int node,int st, int end, int l, int r, int c){
  if(lazy[node]){
    t[node]=1ll<<lazy[node];
    if(st!=end)
    {
      lazy[node<<1]=lazy[node<<1|1]=lazy[node];
    }
    lazy[node]=0;
  }
  if(l>end or r <st or st >end){
    return 0ll;
  }
  if(l<=st and r>=end){
    t[node]=1ll << c;
    if(st!=end)
      lazy[node<<1]=lazy[node<<1|1]=c;
    return;
  }
  int mid = (st+end)>>1;
  update(node<<1,st,mid,l,r,c);
  update(node<<1|1,mid+1,end,l,r,c);
  t[node]=t[node<<1]|t[node<<1|1];
}

ll query(int node,int st,int end, int l ,int r){
  if(lazy[node]!=0){
    t[node]=1ll<<lazy[node];
    if(st!=end)
      lazy[node<<1]=lazy[node<<1|1] = lazy[node];
    lazy[node]=0;
  }
  if(l>end or r <st or st>end){
    return 0ll;
  }
  if(l<=st and r>=end){
    return t[node];
  }
  int mid = (st+end)>>1;
  ll q1 = query(node<<1,st,mid,l,r);
  ll q2=query(node<<1|1,mid+1,end,l,r);
  return merge(q1,q2);
}

