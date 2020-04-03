#include <iostream>
#include <algorithm>
using namespace std;
#define m 1000000007;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	short int t;
	long int n,i;
	long long sum,count;
	cin>>t;
	while(t--)
	{
	    sum=count=0;
	    cin>>n;
	    long int *p = new long int[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>p[i];
	    }
	    sort(p,p+n);
	    for(i=n-1;i>=0;i--)
	    {
	        if(i==n-1)
	        {
	            sum=(sum+p[i])%m;
	            count++;
	        }
	        else
	        {
	            p[i]-=count;
	            if(p[i]<0)
	                continue;
	            else
	            {
	                sum+=p[i];
	                sum%=m;
	                count++;
	            }
	        }
	    }
	    cout<<sum<<'\n';
	}
	return 0;
}
