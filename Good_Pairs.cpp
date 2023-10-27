#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        // did freq map cus if we want gcd and lcm to be same of 2 nums then they have to be same nums
        unordered_map<int, int> freqM;
        // freqM[i].first will be the curr elem and freqM[i].second will be the frequency of the curr elem
        for(int i = 0; i < n; i++){
            cin>>v[i];
            freqM[v[i]]++;
        }
        long long ans = 0;
        for(auto p:freqM){
            int freq = p.second;
            /* Explanation for line:30

               nCr formula = n!/(n-r)!*r!
               lets say u have 5 choclates, in how many ways u can choose 2 choclates? (n = 5, r = 2)
               so u will do 5!/((5-2)!*2!) (nCr formula) which is also:
               5*4*3*2*1 / (3*2*1) * 2*1   which is also
               5*4/2  (3*2*1 will cut 3*2*1 from 5*4*3*2*1 so it will result into 5*4)

            */
            ans += (long long) freq*(freq-1)/2;
        }
        cout<<ans<<'\n';
    }
    return 0;
}