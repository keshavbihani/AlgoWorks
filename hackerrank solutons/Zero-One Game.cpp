#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        cin >> n;
        int a[n],b[n];
        int test=0;    
        for(int i = 0; i < n; i++){
           cin >> a[i];
        }
       if(n<3) test=0;
        else
            {
            b[0]=a[0];
            int j=1;
            for(int i=1;i<n-1;i++)
                {
                if(a[i]==1 && a[i-1]==0 && a[i+1]==0)
                    {
                    test=test^1;
                }
                else{
                    b[j]=a[i];
                    j++;
                }
            }
            b[j]=a[n-1];
          //  for(int i=0;i<=j;i++)
         //       cout<<b[i]<<endl;
            for(int i=1;i<=j-1;i++)
                {
                if(b[i]==0 && b[i-1]==0 && b[i+1]==0)
                    test=test^1;
            }
        }
        if(test==0)printf("Bob\n");
        else
            printf("Alice\n");
        // If Alice wins, print 'Alice' on a new line; otherwise, print 'Bob'
    }
    return 0;
}
