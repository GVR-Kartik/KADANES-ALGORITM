#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
		int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int maxm=INT_MIN;
	    int curr_max=0;
	    for(int i=0;i<n;i++){
	        curr_max+=a[i];
	        maxm =max(curr_max,maxm);
	        if(curr_max<0){
	            curr_max=0;
	        }
	    }
	    cout<<maxm<<endl;
	}
	return 0;
}
