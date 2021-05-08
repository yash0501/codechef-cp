#include <iostream>
using namespace std;

int main() {
	int t,x,a,b,i,j;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>x>>a>>b;
	    int sol = a + b*(100-x);
	    int ans = sol*10;
	    cout<<ans<<endl;
	}
	return 0;
}
