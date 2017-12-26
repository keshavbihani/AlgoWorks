/*
Given n boxes containing some chocolates arranged in a row. There are k number of students. 
The problem is to distribute maximum number of chocolates equally among k students by selecting
a consecutive sequence of boxes from the given lot. Consider the boxes are arranged in a row 
with numbers from 1 to n from left to right. We have to select a group of boxes which are in 
consecutive order that could provide maximum number of chocolates equally to all the k students.
An array arr[] is given representing the row arrangement of the boxes and arr[i] represents number
of chocolates in that box at position ‘i’.
*/
#include <bits/stdc++.h>
using namespace std;
 
int maxNumOfChocolates(int arr[], int n, int k)
{
    unordered_map<int, int> um;
 
    int sum[n], curr_rem;
 
    int maxSum = 0;
 
    sum[0] = arr[0];
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + arr[i];
 
    for (int i = 0; i < n; i++) {
 
        curr_rem = sum[i] % k;
 
        if (curr_rem == 0) {
            // update 'maxSum'
            if (maxSum < sum[i])
                maxSum = sum[i];
        }
 

else if (um.find(curr_rem) == um.end())
            um[curr_rem] = i;
 
        else
            if (maxSum < (sum[i] - sum[um[curr_rem]]))
            maxSum = sum[i] - sum[um[curr_rem]];
    }
 
    return (maxSum / k);
}
 
int main()
{
    int arr[] = { 2, 7, 6, 1, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    cout << "Maximum number of chocolates: "
         << maxNumOfChocolates(arr, n, k);
    return 0;
}
