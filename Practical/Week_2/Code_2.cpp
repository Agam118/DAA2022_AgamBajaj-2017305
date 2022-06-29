#include<iostream>
using namespace std;
void find(int arr[] , int n)
{
    for(int i = 0 ; i<n-2 ; i++)
    {
        for(int j = i+1 ; j<n-1 ; j++)
        {
            for(int k=j+1 ; k<n ; k++)
            {
                if(arr[i] + arr[j] == arr[k])
                    cout<<i<<","<<j<<","<<k<<endl;
            }
        }
    }
    return;
}
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i<n ; i++)
        cin>>arr[i];
    find(arr , n);
    
    return 0;   
}
