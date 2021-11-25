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


bool solve(int n, int x, int k){
    if(x % k == 0)
        return true;

    int total = (n+1)/k;
    int te = floor(x/k);
    int ad = total - te;
    int temp = n+1 - ad*k;

    if(temp == x)
        return true;
    
    return false;
}

signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

ll t;
cin>>t;

while(t--){

int n, x, k;

cin>>n>>x>>k;

if(solve(n, x, k)) 
    cout<<"YES"<<endl;
    
else
    cout << "NO"<<endl;

    }
}