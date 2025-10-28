// Practice makes us perfect
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int p[4];
	int count=0;
	for(int i=0;i<4;i++){
	    cin>>p[i];
	    if(p[i]>=10){
	        count++;
	    }
	}
	cout<<count;
	return 0;
}
