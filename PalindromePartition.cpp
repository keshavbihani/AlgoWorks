#include <stdio.h>
#include <string.h>
#include <limits.h>
  
int min (int a, int b) { return (a < b)? a : b; }
  
int minPalPartion(char *str)
{
    int n = strlen(str);
  
    int C[n][n];
    bool P[n][n];
  
    int i, j, k, L; // different looping variables
  
    for (i=0; i<n; i++)
    {
        P[i][i] = true;
        C[i][i] = 0;
    }
  
    for (L=2; L<=n; L++)
    {
        for (i=0; i<n-L+1; i++)
        {
            j = i+L-1; // Set ending index
            if (L == 2)
                P[i][j] = (str[i] == str[j]);
            else
                P[i][j] = (str[i] == str[j]) && P[i+1][j-1];
  
            // IF str[i..j] is palindrome, then C[i][j] is 0
            if (P[i][j] == true)
                C[i][j] = 0;
            else
            {
                C[i][j] = INT_MAX;
                for (k=i; k<=j-1; k++)
                    C[i][j] = min (C[i][j], C[i][k] + C[k+1][j]+1);
            }
        }
    }
  
    return C[0][n-1];
}
  
int main()
{
   char str[] = "ababbbabbababa";
   printf("Min cuts needed for Palindrome Partitioning is %d",
           minPalPartion(str));
   return 0;
}
