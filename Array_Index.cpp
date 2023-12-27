#include<bits/stdc++.h>

using namespace std;

#define ll long long

#define sky LONG_LONG_MAX

#define ajen LONG_LONG_MIN

#define mod 1000000007

int main(){

ios_base::sync_with_stdio(0);

cin.tie(0);

ll t; cin>>t;

while(t--){

ll n; cin>>n;

ll a[n],pref[n],suff[n];

for(int i = 0; i<n; i++){

cin>>a[i];

pref[i] = a[i];

suff[i] = a[i];

}

for(int i = 1; i<n; i++){

pref[i] = pref[i]+pref[i-1];

}

for(int i = n-2; i>=0; i--){

suff[i] = suff[i]+suff[i+1];

}

ll ans = sky;

for(int i = 0; i<n-1; i++){

if((suff[i+1]-pref[i])>=0){

ans = min(ans,abs(pref[i]-suff[i+1]));

}

}

if(ans==sky)cout<<"-1"<<endl;

else cout<<ans<<endl;

}

return 0;

}