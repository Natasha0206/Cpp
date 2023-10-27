#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    int sum=0;
	    for(int i=0;i<n;i++)
	    sum+=a[i];
	    
	    sort(a,a+n,greater<int>());
	  
	    int i;
	   // int count=0;
	    int temp=n;
	    for(i=0;i<temp;i++){
	       // if(n<=a[i])
	       // break;
	       // else
	       // count += n-a[i];
	       // n--;
	       if(a[i]>temp-i)
	       break;
	    }
	    if(i!=temp)
	    {
	    cout<<"-1"<<endl;
	    }
	    else
	        cout<<((n*(n+1))/2)-sum<<endl;
	}
	return 0;
}