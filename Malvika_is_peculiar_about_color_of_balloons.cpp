// xx Krysje xx

#include <bits/stdc++.h> 
using namespace std;

 main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
// -------------------------- 
int t;
string str;

cin>>t;
int ans;

while(t--){
    cin>>str;
    int al = 0, bl = 0, i=0;


while(str[i] != '\0'){
    if(str[i] == 'a')
        al++;

    else 
        bl++;
i++;
}

cout<<min(al,bl)<<endl;
}
}