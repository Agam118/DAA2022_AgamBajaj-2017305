//Binary Search in array and printing number of comparisons while searching key in the array, assuming array is sorted
#include<iostream>
using namespace std;
void binary_search(int arr[] , int *c , int n , int *flag)
{
    int key;
    int front = 0 , end = n-1;
    int mid;
    cin>>key;
    for(int i = 0 ; i<n ; i++)
    {   
        mid=(front+end)/2;
        if(key==arr[mid])
        {
            (*c)++;
            *flag=1;
            return;
        }
        else
        {
            if(key > arr[mid])
            {
                front=mid+1;
                (*c)++;
            }
            else{
                end=mid-1;
                (*c)++;
            }
        }
    }
}
int main()
{
    int n , i , flag=0 , c=0;
    cin>>n;
    int *arr = new int[n];
    for(i=0 ; i<n ; i++)
        cin>>arr[i];
    binary_search(arr , &c , n , &flag);
    if(flag==1)
        cout<<"Present "<<c;
    else
        cout<<"Not Present "<<c;
    
    return 0;
}
