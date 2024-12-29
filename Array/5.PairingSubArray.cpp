#include <iostream>
using namespace std;

int pairingSubArray(int arr[], int n)
{
    for (int i =0;i <n;i++)
    {
        for (int j =i;j<n;j++)
        {
            cout <<"(";
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<",";
            }
            cout <<")";
            cout <<endl;
        }
    }
    return 0;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n = 5;
    pairingSubArray(arr,n);
    
}