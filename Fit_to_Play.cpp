// xx Krysje xx

// “Fake people have an image to maintain. Real people just don’t care.” - Hachiman Hikigaya

#include <bits/stdc++.h> 
using namespace std;

#define ll long long int
#define ld long double

#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

// <3 Senjougahara Hitagi <3

//short hand for usual tokens
#define pb push_back
#define pp pop_back
#define fi first
#define se second

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

ll t;
cin>>t;

while(t--){

ll n;
cin>>n;

ll arr[n];

for0(i, n){
  cin>>arr[i];
}

vector<ll> di;

for0(i, n-1){
    if(arr[i] > arr[i+1])
        i++;
    
    else
        di.pb(arr[i+1] - arr[i]);
}

ll maxm = 0;

for(auto i: di){
    maxm = max(maxm, i);
}

if(maxm == 0 or n < 2)
    cout<<"UNFIT"<<"\n";

else
    cout<<maxm<<"\n";

	}
}