#include<iostream>
using namespace std;

void moveToEnd(int arr[], int n)
{
    int j = -1;
    for(int i=0; i<n; i++)
    {
        if(arr[i] != 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j++;
        }
    }
}

int main()
{
    int arr[] = {0, 8, 5, 0, 0, 10, 0, 20}, n=8;
    cout<<"Before Move Zeros: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
   

    moveToEnd(arr, n);
    cout<<"After Move Zeros: ";
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<"  ";
    }
   
}
