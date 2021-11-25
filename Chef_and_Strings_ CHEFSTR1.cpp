// xx Krysje xx

#include <bits/stdc++.h> 
using namespace std;

#define ll long long int
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
	

ll t;
cin>>t;

while(t--){

ll n, gs = 0;
cin>>n;

ll s[n];

for0(j,n){
    cin>>s[j];
}

for0(i, n- 1){
    gs += abs(s[i+1] - s[i]) - 1;
}

cout<<gs<<endl;


}

}