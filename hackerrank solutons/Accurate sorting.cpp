#include <bits/stdc++.h>

using namespace std;
void swap(int &x, int &y) {
   int temp;
   temp = x; /* save the value at address x */
   x = y;    /* put y into x */
   y = temp; /* put x into y */
  
   return;
}
int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        int n;
        int test=0;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
           cin >> a[i];
        }
        if(n==1)test=0;
        if(n==2 && abs(a[0]-a[1])==1)test=0;
        else test=1;
        if(n>2){
        int i=1;
        while(i<n-1)
            {
         if(a[i-1]==a[i]+1)swap(a[i-1],a[i]);
         if(a[i]==a[i+1]+1)swap(a[i],a[i+1]);  
         
         if(a[i-1]<=a[i] && a[i]<=a[i+1])
             test=1;
         else{
             test=0;
             break;
         }
         i++;   
        }
          
        }
         if(test==1)cout<<"Yes"<<endl;
        else cout<<"No"<<endl; 
        // Write Your Code Here
    }
    return 0;
}
