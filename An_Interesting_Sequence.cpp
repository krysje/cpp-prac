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


int gcd(int a, int b){
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    if (a == b)
        return a;
  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}


signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

ll t;
cin>>t;
int ans = 0;

while(t--){

int k; cin >> k;
vector<int> dr;

for(int i = 1; i <= 2*k+1; i++){
    int temp = k + (i*i);
    dr.pb(temp);
}

for(int i = 0; i <= 2*k; i++)
    cout<<dr[i]<<" ";


for(int i = 0; i <= 2*k -1; i++){
    int tem  = gcd(dr[i], dr[i+1]);
    cout<<"gcd "<<tem<<endl;
    ans += tem; 
}

    cout<<ans<<endl;

}
}


gcd(k+1, k+4) + gcd(k+4, k+9) + gcd(k+9, k+16), .......  2k elementszz