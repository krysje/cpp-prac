// xx Krysje xx

#include <bits/stdc++.h> 
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
// -------------------------- 
string s1, s2;
int t;

cin>>t;


while(t--){

    int min = 0, max = 0;

    cin>>s1>>s2;

    int len = s1.length();

    for(int i=0; i<len; i++){
        if(s1[i] == '?' || s2[i] == '?'){
            max++;
        }
        else if (s1[i] == s2[i])
            continue;
        
        else{
            min++;
            max++;
        }
    }

    cout<<min<<" "<<max<<endl;

}
}