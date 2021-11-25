// xx Krysje xx

// “Fake people have an image to maintain. Real people just don’t care.” - Hachiman Hikigaya

#include <bits/stdc++.h> 
using namespace std;

#define ll long long int
#define for0(i, n) for (int i = 0; i < (int)(n); ++i) // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i) // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n) - 1; i >= 0; --i) // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i) // reverse 1 based

// <3 Senjougahara Hitagi <3 my waifu .

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

ll n, k;

cin>>n>>k;

ll arr[n];
ll flag = 0;

ll solved = 0, veryfast = 0, slow = 0;


for0(i, n){
    cin>>arr[i];

    if(arr[i] > -1)
     solved++;
    
    if(arr[i] == 1 or arr[i] == 0)
       veryfast++;
   
    if(arr[i] > k)
        slow++;
    
}

float p = ceil((float)n / 2);

    if(solved < p) cout<<"Rejected\n";
    else if(solved >= p and slow > 0) cout<<"Too Slow\n";
    else if(veryfast == n) cout<<"Bot\n";
    else cout<<"Accepted\n";
}

return 0;

}