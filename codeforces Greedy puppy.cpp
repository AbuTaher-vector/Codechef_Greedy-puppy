
#include<bits/stdc++.h>
using namespace std;
#define nn int
#define dd double
#define ll long long int
int main()
{
      nn x,y,tt;
      cin>>tt;
      while(tt--)
      {
          cin>>x>>y;
         int mx=0;
         for(int i=2;i<=y;i++)
         {
             int a=x%i;
             mx=max(mx,a);
         }
         cout<<mx<<endl;
      }


}
