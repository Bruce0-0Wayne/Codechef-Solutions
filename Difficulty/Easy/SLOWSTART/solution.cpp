#include <iostream>
using namespace std;

int main() {
	// your code goes 
	int t;
	cin>>t;
	while(t--){
    	int x,h;
    	cin>>x>>h;
    	int  count = 0 ,i =0;
	    while(i < 5 && h > 0){
	        h = h - x/2;
	        count ++;
	        i++;
	    }
	    while(h > 0){
	        h = h - x;
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
