#include<iostream>
using namespace std;
void count(int arr[] , int n , int key , int* c)
{
    for(int i = 0 ; i<n-1 ; i++)
    {
        for(int j = i+1 ; j<n ; j++)
        {
            if(arr[i]>arr[j] && arr[i]-arr[j]==key)
                (*c)=(*c)+1;
            else
            {
                if(arr[j]-arr[i]==key)
                    (*c)=(*c)+1;
            }
        }
    }
    return;
}
int main()
{
    int n , c=0 , key;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i<n ; i++)
        cin>>arr[i];
    cin>>key;
    count(arr , n , key , &c);
    cout<<c;
    
    return 0;   
}
