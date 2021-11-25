#include "bits/stdc++.h" 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
int n,t,ans;
cin>>n;

while(n--){
    cin>>t;

    int l = t % 10;

    while (t >=10){
        t = t/10;
    }

cout<<(l+t)<<endl;

    }
}