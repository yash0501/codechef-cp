#include <iostream>
using namespace std;

int main() {
	int t, d,n,a,b,c,i;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>d>>n>>a>>b>>c;
	    int dis = n*d;
	    if(dis>=42){
	        cout<<c<<endl;
	    }
	    else if(dis>=21){
	        cout<<b<<endl;
	    }
	    else if(dis>=10){
	        cout<<a<<endl;
	    }
	    else{
	        cout<<0<<endl;
	    }
	}
	return 0;
}
