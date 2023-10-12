#include <iostream>
#include<string>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >> n;
	    string A;
	    cin >> A;
	    int serve=1;
	    int points_a=0;
	    int points_b=0;
	    for(int i=0 ; i < A.length()  ; i++){
	        if(A[i]=='A'){
	            if(serve==1){
	                points_a++;
	            }
	            serve=1;
	            
	        }
	        else if(A[i]=='B'){
	            if(serve==0){
	                points_b++;
	            }
	            serve=0;
	        }
	    }
	    cout << points_a << " " << points_b << endl;
	}
	
	
	return 0;
}
