#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[2*n];
        for(int i=0;i<(2*n);i++)
        cin>>a[i];
        
        sort(a,a+(2*n));
        
        int j=n-1;
        int mini=INT_MAX;
        for(int i=0;i<=n;i++)
        {
            mini=min(a[j]-a[i],mini);
            j++;
        }
        cout<<mini<<endl;
    }
	return 0;
}