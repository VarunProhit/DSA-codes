#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll bsearch(ll a[],ll val,ll le,ll ri,ll n)
{
   ll in = le + (ri-1)/2;
   if(a[in] == val)
    return in;
    else if(in==0 || in == n-1)
    return -1;
  else if(a[in]>val)
    bsearch(a, val,le,in,n);
  else if(a[in]<val)
  bsearch(a,val,in,ri,n);
  
}
int main(){
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
    ll a[5] = {1,2,3,4,5};
    cout<<bsearch(a,9,0,4,5);
  
      cout<<endl;
    
    return 0;
}
