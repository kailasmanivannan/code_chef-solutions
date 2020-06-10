#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define m 1000000007
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    short int t;
    ll n,i,count;
    cin>>t;
    while(t--)
    {
        count=0;
        vector <bool> ar;
        string a;
        cin>>a;
        n=a.length();
        for(i=0;i<n;i++)
        {
            if(a[i]=='x')
                ar.push_back(0);
            else
                ar.push_back(1);
        }
        i=0;
        while(i<n-1)
        {
            if(ar[i]==0&&ar[i+1]==1)
            {
                count++;
                i=i+2;
            }
            else if(ar[i]==1&&ar[i+1]==0)
            {
                count++;
                i=i+2;
            }
            else
            {
                i++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}
