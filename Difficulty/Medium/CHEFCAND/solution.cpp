//Chef and Candies
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    if(x>n){
	        cout<<0<<endl;
	    }
	    else if(abs(n-x)%4==0){
	        cout<<abs(n-x)/4<<endl;
	    }
	    else{
	        cout<<abs(n-x)/4 +1<<endl;
	    }
	}
	return 0;
}
