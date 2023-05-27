// GOOD TURN
#include <iostream>
using namespace std;
int sumofroll(int x, int y){
    int sum = x + y;
    return sum;
}

int main() {
	// your code goes here
	int T, X, Y;
	cin>>T;
	while(T--){
    	cin>>X>>Y;
    	if(sumofroll(X, Y) > 6){
	    cout<<"YES"<<endl;
	    }
	    else {
	        cout<<"NO"<<endl;
	    }
	}
	
	
	return 0;
}
