#include <bits/stdc++.h>
using namespace std;
int findByOptimal(vector<int> &arr, int n)
{
    int x=0;
    for (int i = 0; i < n; i++)
    {
        x = x^arr[i];
    }
    return x;
}
int main()
{

    vector<int> arr = {1,2,4,2,4}; 
    cout<<findByOptimal(arr,6);
    return 0;
}