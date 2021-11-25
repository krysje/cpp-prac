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

ll wt[n+5];
ll l[n];
ll ref[n];

for0(i, n){
    cin>>wt[i];
}

for0(i, n){
    cin>>l[i];
}

for0(i, n)
    ref[i] = wt[i];

sort(ref, ref+n);    
ll count = 0;

for(int j = 0, k = 0; j < n, k < n; j++, k++){

    if(wt[j] > ref[k]){

        ll skip = l[j];
        while(wt[j + skip] != 0){
            skip += skip; 
            count++;
        }

        wt[j+skip] = wt[j];
        wt[j] = 0;
        j++;
        
    }

    else if(wt[j] == ref[k]){
        j++;
        k++;
    }

}

cout<<count<<"\n";

	}
}