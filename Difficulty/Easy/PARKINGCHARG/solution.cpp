#include <iostream>
using namespace std;

int main() {
	// your code goes here

	    int X,Y,H;
	    cin>>X>>Y>>H;
	    if(H<=1){
	        cout<<(X);
	    }
	    else{
	        cout<<(X)+(Y*(H-1));
	    }
	return 0;
}
