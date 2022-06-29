#include<bits/stdc++.h>
using namespace std;
int main()
{
      string s;
      cin>>s;
      int a[26]={0};
      for(int i = 0 ; s[i]!='\0';i++)
      {
            a[s[i]-97]++;
      }
      char c=97;
      int max = INT_MIN;
      int index = -1;
      for(int i = 0 ; i<26;i++)
      {
           if(max>a[i])
           {
               continue;
           }
           else if(max<a[i])
           {
               max=a[i] ;
              
           }
          
      }
      for(int i = 0 ; i<26;i++)
        {
            c = 97;
            if(max == a[i])
            {
                index=i;
                 c=c+index;
                 cout<<c<<"="<<max; 

                
            }
        }
     

}
