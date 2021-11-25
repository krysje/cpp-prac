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

float convert_time(string s, string si){
    float time = 0.0, time1 = 0.0;

    time = stoi(s.substr(0, 2));
    time1 = stoi(s.substr(3, 5));
    
    time = time + (float)(time1/60);

    if(si[0] == 'P' and s.substr(0, 2) != "12")
        time +=  12;

    else if(si[0] == 'A' and s.substr(0, 2) == "12")
        time -= 12;
        
    return time;
}



signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

ll t;
cin>>t;

while(t--){

string p, pi;
cin>>p;
cin>>pi;

float pt = convert_time(p, pi); 

//cout<<pt<<"\n";

ll n;
cin>>n;

    while(n--){
        string l, li;
        string r, ri;

        cin>>l>>li;
        cin>>r>>ri;

    float lt = convert_time(l, li);
    float rt = convert_time(r, ri);

    // cout<<lt<<endl;
    // cout<<rt<<endl;


    if(rt-lt >= pt-lt and pt >= lt and pt <= rt)
        cout<<"1";

    else    
        cout<<"0";

    }

    cout<<"\n";

	}
}