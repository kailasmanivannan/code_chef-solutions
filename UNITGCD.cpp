#include <iostream>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	short int t;
	long int n,i,temp;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    if(n==1)
	    {
	        cout<<"1\n1 1\n";
	    }
	    else 
	    {
	        if(n%2==0)
	        {
    	        temp=n/2;
    	        cout<<temp<<'\n';
    	        for(i=2;i<=n;i=i+2)
    	        {
    	            if(i==n)
    	                cout<<"2 "<<"1 "<<n<<'\n';
    	            else
    	                cout<<"2 "<<i<<' '<<i+1<<'\n';
    	            
    	        }   
	        }
    	    else
    	    {
    	        temp=n-1;
    	        temp/=2;
    	        cout<<temp<<'\n';
    	        cout<<"3 "<<"1 2 3\n";
    	        for(i=4;i<n;i=i+2)
    	        {
    	            cout<<"2 "<<i<<' '<<i+1<<'\n';
    	        }  
    	    }
	    }
	}
	return 0;
}
