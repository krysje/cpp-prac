#include "bits/stdc++.h" 
using namespace std; 

int main(){
   float bal;
   int n;

   cin>>n>>bal;

   if(n % 5 == 0 && bal >= (n+0.50)){
       printf("%.2f",(bal-n-0.50));
   }
else 
   printf("%.2f", bal);
}
