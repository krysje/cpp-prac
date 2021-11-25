// xx Krysje ASPECT xx 

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

char re[3][3];
int x = 0, o = 0, da = 0;
int flagx = 0, flagy = 0;
int ans = 0;


for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
        cin >> re[i][j];
        if(re[i][j] == 'X')
            x++;
        if(re[i][j] == 'O')
            o++;
        if(re[i][j] == '_')    
            da++;
    }
    }
            
        if(re[0][0] == 'X' and re[0][1] == 'X' and re[0][2] == 'X')
            flagx = 1;

        if(re[1][0] == 'X' and re[1][1] == 'X' and re[1][2] == 'X')
            flagx = 1;

        if(re[2][0] == 'X' and re[2][1] == 'X' and re[2][2] == 'X')
            flagx = 1;

        if(re[0][0] == 'X' and re[1][0] == 'X' and re[2][0] == 'X')
            flagx = 1;

        if(re[0][1] == 'X' and re[1][1] == 'X' and re[2][1] == 'X')
            flagx = 1;

        if(re[0][2] == 'X' and re[1][2] == 'X' and re[2][2] == 'X')
            flagx = 1;


        // -----------------

        if(re[0][0] == 'O' and re[0][1] == 'O' and re[0][2] == 'O')
            flagy = 1;

        if(re[1][0] == 'O' and re[1][1] == 'O' and re[1][2] == 'O')
            flagy = 1;

        if(re[2][0] == 'O' and re[2][1] == 'O' and re[2][2] == 'O')
            flagy = 1;

        if(re[0][0] == 'O' and re[1][0] == 'O' and re[2][0] == 'O')
            flagy = 1;

        if(re[0][1] == 'O' and re[1][1] == 'O' and re[2][1] == 'O')
            flagy = 1;

        if(re[0][2] == 'O' and re[1][2] == 'O' and re[2][2] == 'O')
            flagy = 1;


        // ------------------

        if(re[0][0] == 'O' and re[1][1] == 'O' and re[2][2] == 'O')
            flagy = 1;
        
        if(re[0][2] == 'O' and re[1][1] == 'O' and re[2][0] == 'O')
            flagy = 1;
        
        // -----------------

        if(re[0][0] == 'X' and re[1][1] == 'X' and re[2][2] == 'X')
            flagx = 1;
        
        if(re[0][2] == 'X' and re[1][1] == 'X' and re[2][0] == 'X')
            flagx = 1; 


    if(o > x or x > (o + 1) or (flagx == 1 and o == x) or (flagy == 1 and x == o +1))
        cout<<3<<endl;

    else if((flagx == 1 and (x = o + 1)) or (flagy == 1 and o == x) or (flagx == 0 and flagy == 0  and x == o + 1 and da == 0))
        cout<<1<<endl;

    else
    cout<<2<<endl;
    

    }
}