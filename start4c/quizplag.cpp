#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,m,k,i,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n>>m>>k;
	    int num,arr[n],p=0;
	    for(j=0;j<n;j++){
	        arr[j]=0;
	    }
	    for(j=0;j<k;j++){
	        cin>>num;
	        if(num<=n){
	            arr[num-1]++;
	        }
	    }
	    for(j=0;j<n;j++){
    	        if(arr[j]>1){
    	            p++;
    	        }
    	    }
	    cout<<p<<" ";
	    if(p!=0){
	        for(j=0;j<n;j++){
    	        if(arr[j]>1){
    	            cout<<j+1<<" ";
    	        }
    	    }
	    }
	    cout<<endl;
	}
	return 0;
}
