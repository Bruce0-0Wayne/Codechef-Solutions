#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >>t;
	while(t--){
	   string x,y;
	   int ans=0;
	   cin >> x>>y;
	   for(int i= 0 ; i < x.length() ; i++){
	       if( x[i] == '?' || y[i] == '?' ){
	           ans=1;
	       }
	       else if(x[i]==y[i]){
	           ans=1;
	           
	       }
	       else{
	           ans=0;
	           break;
	       }
	       
	   }
	   
	   if(ans==1){
	       cout << "Yes" << endl;
	   }
	   else{
	       cout << "No" << endl;
	   }
	}
	
	return 0;
}
