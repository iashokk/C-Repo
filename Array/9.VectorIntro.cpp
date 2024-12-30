// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int vectorF (vector <int> v)
{
    int n = v.size();
    for (int i =0;i<n;i++)
    {
        cout<<v[i]<<endl;
       
    }
     cout<<v.capacity()<<endl;
     v.push_back(14);
     cout<<v.capacity();
    return 0;
}


int main() {
    vector<int> v= {1,2,3,4,5};
    vectorF(v);

    return 0;
}