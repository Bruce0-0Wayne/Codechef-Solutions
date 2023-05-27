// AGE LIMIT
#include <iostream>
using namespace std;

void agelimit(int x, int y, int a){
    if (a >= x && a < y){
        cout<<"YES"<<endl;;
    }
    else{
        cout<<"NO"<<endl;;
    }
}

int main() {
	// your code goes here
	int T, X, Y, A;
	cin>>T;
	for(int i = 1; i <= T; i++){
	    cin>>X>>Y>>A;
	    agelimit(X,Y,A);
	}
	
	return 0;
}
