#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define loop(i,ct,n) for(int i=ct;i<n;i++)

int main()
{
	int t,n,Q,ct,cc,len,sum;
	cin>>t;
	string str;
	vector<int> store;
	while(t--){
		cin>>n>>Q;
		cin>>str;
		sort(str.begin(),str.end());
		ct=1;
		loop(i,1,n)
		{
			if(str[i]==str[i-1])ct++;
			else{
				store.push_back(ct);
				ct=1;
			}

		}
		store.push_back(ct);
		len=store.size();
		sort(store.rbegin(),store.rend());
		while(Q--)
		{
			cin>>cc;
			loop(i,0,len)
			{
				if(cc<store[i])sum+=store[i]-cc;
				else break;
			}
			cout<<sum<<endl;
			sum=0;
		}
		store.clear();
		
	}
	return 0;
}