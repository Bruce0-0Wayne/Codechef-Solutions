#include <iostream>
#include <string>
#include <cmath>
using namespace std;
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define f(i,st,en) for(int i=st;i<en;i++)
int n,ones[1000],df[1000],sz,countbits[1000];
int main()
{
    fast;
    string str;
    int t,ans,ct,m0,m1,li,id,k,nbits,maxv;
    bool isone,bo1,bo2;
    cin>>t;
    while(t--)
    {
        cin>>str;
        n=str.length();
        if(n==1){cout<<1<<endl;continue;}
        ct=0;
        sz=0;
        isone=false;
        countbits[0]=0;
        if(str[0]=='1')
        {
            isone=true;
            ones[0]=0; 
            sz++;
            countbits[0]=1;   
        }
        ct=1;
        m0=0;
        m1=0;
        bo1=false;
        bo2=false;
        f(i,1,n)
        {
            countbits[i]=countbits[i-1];
            if(str[i]=='1')
            {
                ones[sz]=i; 
                sz++;
                countbits[i]++;
                if(!bo1 && str[i-1]=='0') bo1=true;
                if(!bo2 && i+1<n && str[i+1]=='0')bo2=true;
            }
            if(str[i]==str[i-1])ct++;
            else{
                if(isone){if(m1<ct)m1=ct;}
                else if(m0<ct){m0=ct;}
                isone=1-isone;
                ct=1;
            }
        }
        if(ct>m0 || ct>m1)
        {
            if(isone && m1<ct)m1=ct;
            if(!isone && m0<ct)m0=ct;
        }  
        if(m1==0||m1==n || n==2)
        {
            if(n==2) cout<<3<<endl;
            else cout<<n<<endl;
            continue;
        }
        ans=1+m0+m1;
        if(bo1) ans++;
        if(bo2) ans++;
        df[0]=ones[0];
        if(sz>1){
            f(i,1,sz)
            {
                df[i]=ones[i]-ones[i-1]-1;
                if(i>=2)df[i]+=df[i-2];
            }
        }
        f(l,3,n)
        {
            li=l-1;
            ct=0;
            m1=0;
            maxv=l*(l+1)/2-1;
            if(maxv>n-l+1)maxv=n-l+1;
            bool found[1000][1000]={false};
            int maxh[1000]={0};
            f(i,0,n-li)
            {
                nbits=countbits[i+li];
                if(i>0) nbits-=countbits[i-1];
                if(maxh[nbits]>=l+1-nbits|| nbits==0 || nbits==l)continue;
                while(m1<sz && ones[m1]<i)m1++;
                if(nbits==1) id=(ones[m1]-i);
                else{
                    id=df[m1+nbits-1];
                    if(nbits%2) id+=(ones[m1]-i)-df[m1];
                    else if(m1>0)id-=df[m1-1]; 
                }
                if(found[nbits][id])continue;
                else{
                    ct++;
                    maxh[nbits]++;
                    found[nbits][id]=true;
                }
                if(maxv==ct) break;
            }
            ans+=ct;
        }
        cout<<ans<<endl;
    }
    return 0;
}