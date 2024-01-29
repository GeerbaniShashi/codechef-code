#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--) {
	    ll n = 6;
	    char ch[n];
	    for(ll i=0; i<n; i++) {
	        cin>>ch[i];
	    }
	    ll count = 0;
	    for(ll i=0; i<n-2; i++) {
	        if(ch[i]=='W'&&ch[i+1]=='W'&&ch[i+2]=='W') {
	            count = 1;
	            cout<<"YES"<<endl;
	            break;
	        }
	    }
	    if(count == 0) cout<<"NO"<<endl;
	}

}
