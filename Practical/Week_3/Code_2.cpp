//Selection Sort
#include<iostream>
using namespace std;
void selectionSort(int arr[] , int n , int *c)
{
    int min;
    for(i = 0 ; i<n-1 ; i++)
    {
        min = i;
        for(j = i+1 ; j<n ; j++)
        {
            *c = *c + 1;
            if(arr[j] < arr[i])
                min = j;
        }
        swap(arr[min] , arr[i]);
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
    selectionSort(arr , n , &c);
    for(int i = 0 ; i<n ; i++)
        cout<<arr[i]<<" ";
    cout<<"\n"<<c;
  
    return 0;
}
