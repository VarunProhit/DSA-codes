#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 
     ll t,i,j;
     cin>>t;
     while(t--)
     {
      ll n;
      cin>>n;
      string s,s1;
      cin>>s;
      s1=s;
      for(i=1;i<n;i++)
      {
        for(j=0;j<i;j++)
        {
           if((s[j]=='R'&&s[i]=='P')||(s[i]=='R'&&s[j]=='P'))
           s1[j]='P';
           else if((s[j]=='R'&&s[i]=='S')||(s[i]=='R'&&s[j]=='S'))
           s1[j]='R';
           else if((s[j]=='S'&&s[i]=='P')||(s[i]=='S'&&s[j]=='P'))
           s1[j]='S';
        }  
      }
      cout<<s1;
       cout<<endl;
     }
    return 0;
}
