#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,arr[100000],a=0,b=0,sum=0,i;
    cin>>n;
    for(i=0;i<n;i++)
       {
           cin>>arr[i];
           sum+=arr[i];
           if(arr[i]==1)
            a++;
           if(arr[i]==2)
            b++;
       }
       if(a>0 )
        cout<<"-1";
      else if(a==0)
        cout<<"1";




}
