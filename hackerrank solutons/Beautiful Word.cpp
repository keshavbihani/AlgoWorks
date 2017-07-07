#include <bits/stdc++.h>

using namespace std;

int main(){
    map<char,char> mymap;  
    mymap['a'] = 'a';
      mymap['e'] = 'a';
      mymap['i'] = 'a';
      mymap['o'] = 'a';
      mymap['u'] = 'a';
      mymap['y'] = 'a';
    string w;
    cin >> w;
    
    int test=0;
    

    for(int i=0;i<w.length()-1;i++)
        {
       if((w[i]==w[i+1]) || ((mymap[w[i]]=='a') &&(mymap[w[i+1]]=='a')))
        {    test=1;
         break;
        }
               }
   
    if(test==0) printf("Yes\n");
    else printf("No\n");
    // Print 'Yes' if the word is beautiful or 'No' if it is not.
    return 0;
}
