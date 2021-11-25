
#include <bits/stdc++.h> 
using namespace std;

#define ll long long int
#define ld long double

const int mx = 1e6 + 5;
const int INF = 1000000007;

void solve() {
    ll n; cin >> n;

    vector<ll> toDrive(n);

    ll maxDistance = 0;
    
    for(int i = 0; i < n; i++) {
        cin >> toDrive[i];
        maxDistance = max(maxDistance, 2 * toDrive[i]);
    }
    
    vector<ll> fuel(n);
    for(int i = 0; i < n; i++) {
        cin >> fuel[i];
    }
    
    
    vector<ll> dp(maxDistance + 1, INF);
    dp[0] = 0;
    
    for(int i = 1; i <= maxDistance; i++) {
        for(int j = 0; j < n; j++) {
            if(fuel[j] <= i) {
                dp[i] = min(dp[i], dp[i - fuel[j]] + 1);
            }
        }
    }


    ll ans = 0;
    
    for(int i = 0; i < n; i++) {
        ans += dp[2 * toDrive[i]];
    }
    
    cout << ans << '\n';
}


signed main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	

ll t; cin>>t;

while(t--){

    solve();
	
    }
}
