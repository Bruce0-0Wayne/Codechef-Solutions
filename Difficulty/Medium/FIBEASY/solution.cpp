#include <iostream>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define f(i,st,n)for (int i = st; i < n; ++i)
#define flog2(n) 63- __builtin_clzll(n);
int main()
{
    fast;
    unsigned long long int p;
    int t,n=1;
    cin>>t;
    f(i,0,t){
        cin>>p;
        n=flog2(p);
        if(n>2){
            n%=4;
            if(n==1)n=9; 
        }
        cout<<n<<"\n";
    }
    return 0;
}