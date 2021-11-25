// xx Krysje xx

#include <bits/stdc++.h> 
using namespace std;

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
	
// 

string str;
cin>>str;
int c=0, ch=0, che=0, chef=0;

for0(i, str.length()){
    if(str[i] == 'C')
        c++;

    else if(str[i] == 'H' && c > ch){
        ch++;
    }    
    
    else if(str[i] == 'E' && ch > che){
        che++;
    }    

    else if(str[i] == 'F' && che > chef){
        chef++;
    }    
}

cout<<chef<<endl;

}