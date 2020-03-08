#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t,m,n,i,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    int bas[n];
	    int price[n];
	    int count[m]={0};
	    int res[m]={0};
	    for(i=0;i<n;i++)
	    {
	        cin>>bas[i];
	        count[bas[i]-1]++;
	    }
	    for(i=0;i<n;i++)
	    {
	        cin>>price[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        temp=bas[i];
	        res[temp-1]=res[temp-1]+price[i];
	    }
	    int flag = 0,adr;
	    for(i=0;i<m;i++)
	    {
	        if(res[i]==0&&count[i]>0)
	        {
	            flag=1;
	            adr=i;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        cout<<res[adr];
	    }
	    else
	    {
	        sort(res,res+m);
	        for(i=0;i<m;i++)
	        {
	            if(res[i]!=0)
	            {
	                cout<<res[i];
	                break;
	            }
	        }
	    }
	   cout<<endl;
	}
	return 0;
}
