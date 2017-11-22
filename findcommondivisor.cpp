//Find element in array that divides all array elements

#include<bits/stdc++.h>
using namespace std;
 
int gcd (int a, int b)
{
    if (a == 0)
        return b;
    return gcd (b % a, a);
}
 
int findNumber (int arr[], int n)
{
    // Find GCD of array
    int ans = arr[0];
    for (int i = 0; i < n; i++)    
        ans = gcd (ans, arr[i]);
     
    // Check if GCD is present in array
    for (int i = 0; i < n; i++)    
        if (arr[i] == ans)         
            return ans;        
 
    return -1;
}
 
int main()
{
    int arr[] = {2, 2, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << findNumber(arr, n) << endl;
    return 0;
}
