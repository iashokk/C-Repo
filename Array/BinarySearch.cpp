// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binary_search(int arr[], int n , int key)
{
    int s =0;
    int e= n-1;
    while (s<=e){
        int m = (s+e)/2;
        if(arr[m]==key)
        {
            return m;
        }
        else if(arr[m]>key)
        {
            e = m -1;
        }
        else
        {
            s = m+1;
        }
    }
    return -1;
}
int main() {
    // binary search
 int arr[]= {1,3,5,7,9};
 int n = sizeof(arr)/sizeof(int);
 int key = 9;
 int index = binary_search(arr,n,key);
 if(index !=-1)
 {
     cout <<key<< " found at index " <<index; 
 }
    return 0;
}