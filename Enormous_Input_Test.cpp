#include "bits/stdc++.h" 
using namespace std; 

main(){
    int k;
    long int n,t;
    int cnt=0;

    cin>>n>>k;

    for(int i=1; i<=n; i++){
        cin>>t;
        
         if(t % k == 0)
            cnt++;
    }

    cout<<cnt;

}