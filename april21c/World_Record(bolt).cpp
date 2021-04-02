#include <iostream>
using namespace std;

int main() {
	int t,i,j;
	float k1, k2, k3,n,v;
	cin>>t;
	for(i=0;i<t;i++){
	    cin>>k1>>k2>>k3>>v;
	    n=k1*k2*k3*v;
	    float s;
	    s=100/n;
	    float value = (int)(s * 100 + .5);
        float ans1 = (float)value / 100;
        //cout<<ans1<<endl;
        if(ans1<=9.57){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
	}
	return 0;
}
