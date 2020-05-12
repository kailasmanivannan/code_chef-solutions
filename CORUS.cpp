#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    ll t;
    ll n,q,i,temp,val,count;
    string ar;
    cin>>t;
    while(t--)
    {
        int freq[26]={0};
        cin>>n>>q;
        cin>>ar;
        for(i=0;i<n;i++)
        {
            freq[ar[i]-'a']++;
        }
        while(q--)
        {
            count=0;
            cin>>val;
            for(i=0;i<26;i++)
            {
                if(freq[i]>val)
                {
                    temp=freq[i]-val;
                    count+=temp;
                }
            }
            cout<<count<<endl;
        }
    }
	return 0;
}
