//Minimizing array sum by subtracting larger elements from smaller ones
#include <bits/stdc++.h>
using namespace std;
 
// returns gcd of two numbers
int gcd(int a, int b)
{
    if (b == 0) 
        return a;    
    return gcd(b, a % b);
}
 

int gcdofArray(int arr[], int n)
{
    int ans = arr[0];
    for (int i = 1; i < n; i++) 
        ans = gcd(ans, arr[i]);    
    return ans;
}
 

int main()
{
    int arr[] = { 2, 4, 6 }, n;
    n = sizeof(arr) / sizeof(arr[0]);
    cout << n * gcdofArray(arr, n) 
         << endl;
    return 0;
}
