// xx Krysje xx

// “Fake people have an image to maintain. Real people just don’t care.” - Hachiman Hikigaya

#include <bits/stdc++.h> 
using namespace std;

#define int long long 
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


int ncr(int n, int r){

	int res = 1;
    
	if(r > (n-r))
		r = n-r;

	for0(i, r){
		res *= (n-i);
		res /= (i+1);
	}
	return res;

}


signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

int t;
cin>>t;

while(t--){

int n, k;

cin>>n>>k;

// No. of combinations for dividing n identical things in k groups where blank groups are not allowed : (n-1)C(r-1).

   cout<<ncr(n-1, k-1)<<endl;

    }
}