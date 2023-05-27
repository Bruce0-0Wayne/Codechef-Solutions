// LUCKY FOUR
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x;
	    cin>>x;
	    int count = 0;
	    for(int i = 1; i = x; i-- ){
	           int a = x % 10;
	           if(a == 4){
	            count++;
	           }
	           x = x / 10;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
