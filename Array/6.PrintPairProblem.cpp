//Problem: Triplets with a Given Sum
//You are given an array of integers and a target sum. Write a program to find all unique triplets in the array that add up to the target sum.

#include <iostream>
using namespace std;


int targetAdd(int arr[], int n)
{
    for (int i=0;i <n ;i++)
    {
        int x= arr[i];
        for(int j=i+1;j<n;j++)
        {
            int y = arr[j];
            for (int k=j+1;k<n;k++)
            {
                int z = arr[k];
                if ((x+y+z)==9)
                {
                    cout<<"("<<x<<","<<y<<","<<z<<")"<<endl;
                }
            }
        }
      
        
    }
      return 0;
}

int main()
{
   int  arr[] = {1, 2, 3, 4, 5}  ;
    int target_sum = 9;
    int n = 5;
    targetAdd(arr, n);
}