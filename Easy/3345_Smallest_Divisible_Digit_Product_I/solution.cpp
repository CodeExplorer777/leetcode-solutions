#include <bits/stdc++.h>
using namespace std;

int findProduct(int n)
{
    int prod = 1;
    while (n > 0)
    {

        prod *= (n % 10);
        n /= 10;
    }
    return prod;
}
int smallestNumber(int n, int t)
{
    bool found = false;
    int i = n;
    while(true)
    {
        if (findProduct(i) % t == 0)
        {            
            return i;
        }
        i++;
    }
}
int main()
{

    int t, n;
    cout << "Enter Value of t and n" << endl;
    cin >> n;
    cin >> t;

    cout << smallestNumber(n, t);

    return 0;
}