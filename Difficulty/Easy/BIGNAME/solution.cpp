// Bigger is better
#include <bits/stdc++.h>
using namespace std;

void names(int n, const string& a){
    string ans = "";
        for(int i = 0; i < n; i++){
            ans += "z";
        }
        
        if(ans > a){
            cout<< ans<<endl;
            return;
        }
        cout<<-1<<endl;
}
int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string a;
        cin >> a;
        names(n, a);
        
    
    }
    
    return 0;
}
