#include <iostream>
#include <cmath>
using namespace std;
void reverse(int arr[], int n)
{
    int temp=arr[0];
	for(int i=0;i<n;i++)
    {
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
}
int main() 
{
	int arr[] = {5,10,20,30}, n = 4;
      cout<<"Before Reverse"<<endl;
      for(int i = 0; i < n; i++)
      {
       		cout<<arr[i]<<" ";
       }
       cout<<endl;
       reverse(arr, n);
       cout<<"After Reverse"<<endl;
       for(int i = 0; i < n; i++)
       {
       		cout<<arr[i]<<" ";
       }
    
}