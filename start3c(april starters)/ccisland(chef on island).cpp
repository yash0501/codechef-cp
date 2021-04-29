#include <iostream>
using namespace std;

int main() {
	int t,x,y,x1,y1,d,i,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>x>>y>>x1>>y1>>d;
	    float dx,dy;
	    dx = float(x/x1);
	    dy = float(y/y1);
	    if(dx>=d&&dy>=d){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}
