#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int l,r,m;
	    cin>>l>>r>>m;
	    if(m % l != 0){
	        cout<<((m/l)+(m/r)+ 1)<<endl;
	    }
	    else cout<<((m/l)+(m/r))<<endl;
	}
	return 0;
}
