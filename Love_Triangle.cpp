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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

ll t;
cin>>t;

while(t--){

ll a,b,c;

cin>>a>>b>>c;

bool flag;

if( (a + b > c) and (b + c > a) and (a + c > b) ){

    ld s = (a + b + c) / 2;

    ld ans = s*(s - a)*(s - b)*(s - c);

    ld d = sqrt(ans);

    cout<<"YES ";
    cout<<fixed<<setprecision(5)<<d<<endl;
}

else
    cout<<"NO\n";

}

    return 0;
}