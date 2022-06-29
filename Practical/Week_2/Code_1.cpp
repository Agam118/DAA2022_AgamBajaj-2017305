#include<iostream>
using namespace std;
void find(int arr[] , int n , int key , int* c , int* f)
{
    int flag=0;
    for(int i = 0 ; i<n ; i++)
    {
        if(key==arr[i])
        {
            flag=1;
            (*f)=1;
            cout<<"Present"<<endl;
            (*c)=0;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Not Present"<<endl;
    }
    return;
}
void count(int arr[] , int n , int key , int* c)
{
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i]==key)
        {
            (*c)=(*c)+1;
        }
    }
    return;
}
int main()
{
    int n , c=-1 , key , flag=0;
    cin>>n;
    int *arr = new int[n];
    for(int i = 0 ; i<n ; i++)
        cin>>arr[i];
    cin>>key;
    find(arr , n , key , &c , &flag);
    if(flag==1)
        count(arr , n , key , &c);
    cout<<key<<"->"<<c;
    
    return 0;   
}
