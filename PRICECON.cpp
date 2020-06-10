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
    int n,k,i,temp,sum,newsum;
    cin>>t;
    while(t--)
    {
        sum=newsum=0;
        cin>>n>>k;
        for(i=0;i<n;i++)
        {
            cin>>temp;
            sum+=temp;
            if(temp>k)
            {
                newsum+=k;
            }
            else
            {
                newsum+=temp;
            }
        }
        sum=sum-newsum;
        cout<<sum<<endl;
    }
	return 0;
}
