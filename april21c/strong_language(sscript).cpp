#include <iostream>
#include <string>
using namespace std;

int main() {
    int t,n,k,i,j,m;
    cin>>t;
    for(i=0;i<t;i++){
        cin>>n>>k;
        string s;
        cin>>s;
        int temp=0;
        for(j=0;j<n;j++){
            if(temp==k){
                break;
            }
            if(s[j]=='*'){
                temp++;
            }
            else{
                temp=0;
            }
        }
        if(temp==k){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        /*int flag=0;
        for(j=0;j<n-k;j++){
            int temp=0;
            for(m=0;m<k;m++){
                if(s[j+m]!='*'){
                    break;
                }
                else{
                    temp++;
                }
            }
            if(temp==k){
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }*/
    }
	return 0;
}
