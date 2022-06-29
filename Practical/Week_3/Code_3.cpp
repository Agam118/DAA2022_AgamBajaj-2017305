//Insertion Sort
#include<iostream>
using namespace std;
void insertionSort(int arr[] , int n , int *c)
{
    int x , i , j;
    for(i = 1 ; i<n ; i++)
    {
        x = arr[i];
        j=i-1;
        *c = *c + 1;
        while(j>=0 && arr[j] > x)
        {
            arr[j+1] = arr[j];
            j=j-1;
            *c = *c + 1;
        }
        arr[j+1] = x;
    }
}
int main()
{
    int n , c=0;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i<n ; i++)
        cin>>arr[i];
    insertionSort(arr , n , &c);
    for(int i = 0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<"\n"<<c;
    
    return 0;
}
