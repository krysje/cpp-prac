// xx Krysje xx

#include <bits/stdc++.h> 
using namespace std;

#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

//short hand for usual tokens
#define pb push_back
#define fi first
#define se second

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
//	

int t;
cin>>t;

while(t--){
int n;
cin>>n;

int ar[n];
int cnt = 0;


for0(i,n){
    cin>>ar[i];
}

for0(i,n){
        int sm = 0, pd = 1;

forc(j,i,n){
    sm += ar[j];
    pd *= ar[j];

    if(sm == pd){
        cnt++;
    }
}
}
cout<<cnt<<endl;

}

}