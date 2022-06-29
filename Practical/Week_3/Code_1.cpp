//Bubble Sort
#include<iostream>
using namespace std;
void bubbleSort(int arr[] , int n , int *c)
{
    int s;
    for(int i = 0 ; i<n-1 ; i++)
    {
        s=0;
        for(int j = 0 ; j<n-i-1 ; j++)
        {
            *c = *c + 1;
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                s=1;
            }
        }
        if(s==0)
            break;
    }
}
void swap(int *a , int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n , c=0;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i<n ; i++)
        cin>>arr[i];
    bubbleSort(arr , n , &c);
    for(int i = 0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<"\n"<<c;
    
    return 0;
}
