//Linear Search in array and printing number of comparisons while searching key in the array
#include<iostream>
using namespace std;
void linear_search(int arr[] , int *c , int n , int *flag)
{
    int key;
    cin>>key;
    for(int i = 0 ; i<n ; i++)
    {
        if(key==arr[i])
        {
            (*c)++;
            *flag=1;
            return;
        }
        else
            (*c)++;
    }
}
int main()
{
    int n , i , flag=0 , c=0;
    cin>>n;
    int *arr = new int[n];
    for(i=0 ; i<n ; i++)
        cin>>arr[i];
    linear_search(arr , &c , n , &flag);
    if(flag==1)
        cout<<"Present "<<c;
    else
        cout<<"Not Present "<<c;
    
    return 0;
}
