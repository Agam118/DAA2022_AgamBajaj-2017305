#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
     int key;
     cin>>key;
   int l = 0, h = n-1;
   vector<int>ans;
    for(int i = 0 ; i<n;i++)
    {
            if(arr[l] + arr[h] == key)
            {
              ans.push_back(arr[l]);
              ans.push_back(arr[h]);
              l++;
              h--;
             }
            else if(arr[l]+arr[h]<key)
            {
                l++;
            }
            else h--;

    }
    for(auto it:ans)
    {
        cout<<it<<<", ";
    }
}
