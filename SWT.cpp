#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
	//cout weil count zu schwer wäre.
    cout<<"Enter number of element you want to store: ";
    cin>>n;
    int arr[n],i,j;
    cout<<"Enter array values:\n";
    //super for Schleife
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {// Ich ändere Dinge
            if(arr[j]>arr[j+1])
            {//Der Lauf der Dinge ist unergründlich
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After Bubble sort the array is:\n";//Änderung zum 3
    for(i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}