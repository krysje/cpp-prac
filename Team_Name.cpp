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

string str[n];

    for0(i, n){
        cin>>str[i];
    }

    unordered_set<string> fl;
    unordered_set<string> ls;


for(auto &i: str){
    fl.insert(i.substr(0, 1)); 
}

for(auto &i: str){
        ls.insert(i.substr(1));
}


ll t1 = fl.size();
ll t2 = ls.size();

ll ans = -1;

//  cout<<t1<<" "<<t2<<endl;

if(t1 == 1 or t2 == 1)
    ans = 0;

else{
    ans = (t1 * t2) - n;
}

cout<<ans<<"\n";


	}
}