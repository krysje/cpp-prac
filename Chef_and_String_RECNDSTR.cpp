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

    string s;
    cin>>s;
    ll k = 0;
    bool flag = true;

    ll len = s.length();

    if(len == 1 || len == 2){
        flag = true;
    }

    else if(len % 2 == 0){
        for0(i, len-2){
            if(s[i] != s[i+2]){
                flag = false;
                break;
            }
        }
    }

       else {
        for0(j, len-1){
            if(s[j] != s[j+1]){
               flag = false;
                break;
            }
        }
    }

(flag == true) ? cout<<"YES"<<endl : cout<<"NO"<<endl;


}

}