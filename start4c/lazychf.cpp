#include <iostream>
using namespace std;

int main() {
	int t,x,m,d,i,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>x>>m>>d;
	    int lazy, delay;
	    lazy = x*m;
	    delay=x+d;
	    if(lazy<delay || delay==0){
	        cout<<lazy<<endl;
	    }
	    else{
	        cout<<delay<<endl;
	    }
	}
	return 0;
}
