#include<iostream>
#include <stdio.h>
using namespace std;
#define UN 0
 #define N 9
 bool Unassignedlocation(int arr[N][N], int &row, int &col);
 bool checksafe(int arr[N][N], int row, int col, int num);
 bool Solve(int arr[N][N])
{
    int row, col;
 
    if (!Unassignedlocation(arr, row, col))
       return true; // success!
 
    // consider digits 1 to 9
    for (int num = 1; num <= 9; num++)
    {
        // if looks promising
        if (checksafe(arr, row, col, num))
        {
            arr[row][col] = num;
 
            // return, if success, yay!
            if (Solve(arr))
                return true;
             arr[row][col] = UN;
        }
    }
    return false; // this triggers backtracking
}
/* Searches the arr to find an entry that is still unassigned. If
   found, the reference parameters row, col will be set the location
   that is unassigned, and true is returned. If no unassigned entries
   remain, false is returned. */
bool Unassignedlocation(int arr[N][N], int &row, int &col)
{
    for (row = 0; row < N; row++)
        for (col = 0; col < N; col++)
            if (arr[row][col] == UN)
                return true;
    return false;
}
 
/* Returns a boolean which indicates whether any assigned entry
   in the specified row matches the given number. */
bool UsedInRow(int arr[N][N], int row, int num)
{
    for (int col = 0; col < N; col++)
        if (arr[row][col] == num)
            return true;
    return false;
}
 
/* Returns a boolean which indicates whether any assigned entry
   in the specified column matches the given number. */
bool UsedInCol(int arr[N][N], int col, int num)
{
    for (int row = 0; row < N; row++)
        if (arr[row][col] == num)
            return true;
    return false;
}
 
/* Returns a boolean which indicates whether any assigned entry
   within the specified 3x3 box matches the given number. */
bool UsedInBox(int arr[N][N], int  StartRow, int StartCol, int num)
{
    for (int row = 0; row < 3; row++)
        for (int col = 0; col < 3; col++)
            if (arr[row+StartRow][col+StartCol] == num)
                return true;
    return false;
}
