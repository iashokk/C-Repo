// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int linear_search (int arr[], int n , int key)
{
   for (int i=0; i<n ; i ++)
   {
       if (arr[i]==key)
       {
           return i;
       }
   }
   return -1;
}
int main() {
    // linear search
  int arr[]= {1,2,3,4,5,6,7,8,89,9};
  int n = sizeof(arr)/sizeof(int);
  int Key = 89;
  int index = linear_search(arr,n,Key);
  if(index !=-1)
  {
      cout<<Key <<" found at index "<<index;
  }
  else
  {
      cout<<Key <<" not found";
  }

    return 0;
}