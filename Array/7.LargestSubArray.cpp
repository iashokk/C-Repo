#include <iostream>
using namespace std;
//BruteForce - O(n^3)
int pairingSubArraySum1(int arr[], int n)
{
    int largestSum =0;
    for (int i =0;i <n;i++)
    {
        for (int j =i;j<n;j++)
        {
            int sum=0;
            for(int k=i;k<=j;k++)
            {
                
               sum += arr[k];
              
            }
            if(sum>largestSum)
            {
                largestSum = sum;
            }
        }
        
    }
     cout<<largestSum;
    return 0;
}

//Prefix - O(n^2)
int pairingSubArraySum2(int arr[], int n)
{
    int largestSum =0;
    int prefix[100]={0};
    prefix[0]=arr[0];
    
    for (int i=1;i<n;i++)
    {
        prefix[i]= prefix[i-1]+arr[i];
    }
    for (int i =0;i <n;i++)
    {
        for (int j =i;j<n;j++)
        {
            int sum=0;
            
        sum = i>0?prefix[j]-prefix[i-1]:prefix[j];
            if(sum>largestSum)
            {
                largestSum = sum;
            }
        }
        
    }
     cout<<largestSum;
    return 0;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n = 5;
    pairingSubArraySum2(arr,n);
    cout<<endl;
    pairingSubArraySum2(arr,n);
    
}