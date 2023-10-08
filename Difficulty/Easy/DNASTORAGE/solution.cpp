#include <bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    string str;
	    cin >> str;
	    for( int i=0 ; i < n ; i=i+2){
	        if( str[i] =='0' && str[i+1] == '0'){
	            cout << "A" ;
	        }
	         if( str[i] =='0' && str[i+1] == '1'){
	            cout << "T" ;
	        }
	         if( str[i] =='1' && str[i+1] == '0'){
	            cout << "C" ;
	        }
	         if( str[i] =='1' && str[i+1] == '1'){
	            cout << "G" ;
	        }
	        
	       
	    }
	     cout << endl;
	}
	
	return 0;
}
