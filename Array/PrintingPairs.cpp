#include<iostream>
using namespace std;

int printingPairs(int arr[], int n)
{
    int x, y, z;
    for(int i=0;i<n;i++)
    {
        x= arr[i];
        for(int j=i+1;j<n;j++)
        {
         y = arr[j];
         for (int k= j+1;k<n ;k++)
        {
            z = arr[k];
            cout<<x<<", "<<y<< ","<<z <<endl;
            
        }
          
        }
        
    }
    return 0;
}

int main(){
    int arr[]={1,2,3,4};
    int n = 4;
   printingPairs(arr,n);
    
}