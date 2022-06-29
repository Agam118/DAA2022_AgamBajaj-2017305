#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a1[n];
    int m;
    cin>>m;
    int a2[m];
    for(int i = 0 ; i<n;i++)
    {
        cin>>a1[i];

    }
    for(int i = 0 ; i<m;i++)
    {
        cin>>a2[i];
    }
    int i = 0,j=0;
     while(i<n && j<m)
     {
         if(i!=0 && a[i]==a[i-1])continue;
         if(j!=0 && b[j]==b[j-1])continue;
         if(a1[i]==a2[j])
         {
             cout<<a1[i]<<" ";
             i++;
             j++;
         }
         else if(a1[i]<a2[j])
         i++;
         else if(a1[i]>a2[j])
         j++;
     }
}
