#include <iostream>
using namespace std;

int main() {
	long long int t,n,x,k,i,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>n>>x>>k;
	    if(x%k==0){
	        cout<<"YES"<<endl;
	    }
	    else if((n+1-x)%k==0){
	        cout<<"YES"<<endl;
	    }
	    else{
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}
