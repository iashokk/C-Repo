#include<iostream>
using namespace std;

int reverseArray(int arr[], int n)
{
   int s = 0;
   int e = n-1;
   while (s<e)
   {
      swap(arr[s],arr[e]);
       s+=1;
       e-=1;
   }
   return 0;
}


int main(){
    int arr[]={1,2,3,4,5,6};
    int n = 6;
    for (int i =0;i<n;i++)
    {
        cout<<" "<<arr[i]<<endl;
    }
    reverseArray(arr,n);
     for (int i =0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
    
}