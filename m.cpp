#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans=0;
void bsearch(ll str,ll k,ll x)
{
   ll mid = str + (k-1)/2;
   ll s = (mid*(mid+1))/2;
   if((s == x)||((s>x)&&(s-mid<x)))
    ans =  mid;
  else if((s < x) && (s+(mid+1) >= x))
    ans= mid+1;
  else if(s<x)
    bsearch(mid+1, k,x);
  else
    { 
         bsearch(str, mid-1,x);
    }  
  // return 0;
}
void bsr(ll str,ll k,ll x,ll sum)
{
   ll mid = str + (k-1)/2;
   
   ll s = (sum - (((mid-1)*mid)/2));
  //  if(mid == k)
  //     return k;
    if((s == x)||((s>x)&&(s-(mid)<x)))
    ans= mid;
     else if((s < x) && (s+(mid-1) >= x))
    ans= mid-1;
  else if(s>x)
    bsr(mid+1, k,x,sum);
  else if(s<x)
    { 
         bsr(str, mid-1,x,sum);
    }
    
   
  //return 0; 
}
int main(){
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
   ll t;
   cin>>t;
   while(t--)
   {
       ll k,x,cnt;
       cin>>k>>x;
       ll sum = (k*(k+1))/2;
       if(x == (k*(k+1))/2)
       {
         cout<<k;
       //cout<<"1";
       }
       else if(x< sum)
       {
         bsearch(1,k,x);
         cout<<ans;
       }
       else if(x>= 2*sum-k)
       cout<<2*k-1;
       else if(x <= sum+k-1)
       {
         cout<<k+1;
         
       }
       else
       {
         bsr(1,k-1,x-sum,sum-k);
       ans = min(k +(k - ans ),2*k-1);
          cout<<ans;
       }
      cout<<endl;
   }
    return 0;
}
