//Given a string with repeated characters, task is rearrange characters in a string so that no two adjacent characters are same.
#include<bits/stdc++.h>
using namespace std;
 
const int MAX_CHAR = 26;
 
struct Key
{
    int freq; 
    char ch;

};
 
void rearrangeString(string str)
{
    int n = str.length();
 
    int count[MAX_CHAR] = {0};
    for (int i = 0 ; i < n ; i++)
        count[str[i]-'a']++;
 
    priority_queue< Key > pq;
    for (char c = 'a' ; c <= 'z' ; c++)
        if (count[c-'a'])
            pq.push( Key { count[c-'a'], c} );
 
    str = "" ;
 
    Key prev {-1, '#'} ;
 
    while (!pq.empty())
    {
        Key k = pq.top();
        pq.pop();
        str = str + k.ch;
 
        if (prev.freq > 0)
            pq.push(prev);
 
        (k.freq)--;
        prev = k;
    }
 
    if (n != str.length())
        cout << " Not valid String " << endl;
 
    else // valid string
        cout << str << endl;
}
 
int main()
{
    string str = "bbbaa" ;
    rearrangeString(str);
    return 0;
}
