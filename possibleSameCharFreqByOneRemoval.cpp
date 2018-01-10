/*
Check if frequency of all characters can become same by one removal
*/
#include <bits/stdc++.h>
using namespace std;
#define M 26
 
int getIdx(char ch)
{
    return (ch - 'a');
}
 
bool allSame(int freq[], int N)
{
    int same;
 
    //    get first non-zero element
    int i;
    for (i = 0; i < N; i++)
    {
        if (freq[i] > 0)
        {
            same = freq[i];
            break;
        }
    }
 
    for (int j = i+1; j < N; j++)
        if (freq[j] > 0 && freq[j] != same)
            return false;
 
    return true;
}
 
bool possibleSameCharFreqByOneRemoval(string str)
{
    int l = str.length();
 
    int freq[M] = {0};
    for (int i = 0; i < l; i++)
        freq[getIdx(str[i])]++;
 
    if (allSame(freq, M))
        return true;
 
    for (char c = 'a'; c <= 'z'; c++)
    {
        int i = getIdx(c);
 
      
      if (freq[i] > 0)
        {
            freq[i]--;
 
            if (allSame(freq, M))
                return true;
            freq[i]++;
        }
    }
 
    return false;
}
 
int main()
{
    string str = "xyyzz";
    if (possibleSameCharFreqByOneRemoval(str))
        cout << "Yes";
    else
        cout << "No";
}
