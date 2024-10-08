#include <bits/stdc++.h>
using namespace std;


void mov(char ch, int &a, int &b){
    if(ch == 'R') a++;
    if(ch == 'L') a--;
    if(ch == 'U') b++;
    if(ch == 'D') b--;
}

bool solve(int n, int x, int y, string s){
    int a = 0, b = 0, steps = 0;
    for(int i = 0; i < n; i++){
        mov(s[i], a, b);
        
        steps = abs(x - a) + abs( y -b);
        
        if(steps == i+1){
            return true;
        }
    }
    
    return false;
}
int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        solve(n,x,y,s) ? cout<<"Yes"<<endl : cout<<"No"<<endl;
    }
}
