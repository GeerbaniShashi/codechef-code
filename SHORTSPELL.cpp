#include <bits/stdc++.h>
#define ll long long int 
using namespace std;

int main() {
	// your code goes here
	ll t;
	cin>>t;
	while(t--) {
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    ll i;
	    for(i=0; i<n-1; i++) {
	        if(s[i] > s[i+1]) {
	            break;
	        }
	    }
	    for(ll ix=0; ix<n; ix++) {
	        if(i != ix) cout<<s[ix];
	    }
	    cout<<endl;
	} 
	return 0;
}
