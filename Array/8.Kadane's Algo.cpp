#include <iostream>
using namespace std;
//Kadane's Algo - O(n)
int largestSum(int arr[], int n)
{
    int cs = 0;
    int largest =0;
    int s =0;
    int m = 0;
    int t=0;
    for(int i =0;i<n;i++)
    {
        cs = cs + arr[i];
        if(cs<0)
        {
            cs=0;
            t = i+1;
        }
       if(cs>largest)
       {
           largest = cs;
           s=t;
           m=i;
       }
    }
    for(int i=s;i<=m;i++)
    {
        cout<<arr[i];
    
    }
    cout<<endl;
    cout<<largest;
    return 0;
}

int main()
{
    int arr[]={1,2,3,-4,5};
    int n = 5;
largestSum(arr,n);
}