// xx Krysje xx

// “Fake people have an image to maintain. Real people just don’t care.” - Hachiman Hikigaya

#include <bits/stdc++.h> 
using namespace std;

#define ll long long int
#define ld long double

// <3 Senjougahara Hitagi <3

//short hand for usual tokens
#define pb push_back
#define pp pop_back
#define fi first
#define se second

int knapsack(priority_queue<int> p1, priority_queue<int> p2, int cap){
    int ans = 0;
    int wt = 0;

    if(cap < 2){
        ans = p1.top();

        return ans;
    }

    else{
        while(p2.empty() == false and cap-wt > 1){
            ans += p2.top();
            p2.pop();
            wt = wt+2;
        }

        if(wt < cap){
            while(p1.empty() == false and wt != cap){
                ans += p1.top();
                p1.pop();
                wt++;
            }
        }

        return ans;
    }
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
ll n;
cin>>n;

priority_queue<int> p1;
priority_queue<int> p2;

int m = 0;

for(int i = 0; i<n; i++){

    int wt; cin>>wt;
    int cs; cin>>cs;

    m += wt;

    if(wt == 1)
        p1.push(cs);
    
    else
        p2.push(cs);
}

    for(int i = 1; i <= m; i++){
        cout<<knapsack(p1, p2, i)<<" ";
    }


    return 0;
}
