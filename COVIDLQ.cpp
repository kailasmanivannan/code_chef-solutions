#include <iostream>
#include <vector>
using namespace std;
void YES(){ cout<<"YES\n";}
void NO(){ cout<<"NO\n";}
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	short int T,n,i,j,sum,temp,temp2;
	bool flag;
	cin>>T;
	vector<short int> t;
	while(T--)
	{
	    sum=0;
	    flag=0;
	    cin>>n;
	    bool *ar = new bool[n];
	    for(i=0;i<n;i++)
	    {
	        cin>>ar[i];
	        if(ar[i]==1)
	        {
	            t.push_back(i);
	        }
	    }
        if(n<=6)
        {
            for(i=0;i<n;i++)
            {
                sum+=ar[i];
            }
            if(sum==1)
                YES();
            else 
                NO();
        }
        else
        {
    	    for(i=0;i<t.size()-1;i++)
    	    {
    	        temp = t[i];
    	        temp2 = t[i+1];
    	       // cout<<temp<<' '<<temp2<<'\n';
    	        if(temp2>=temp+6)
    	            {
    	                flag=0;
    	            }
    	        else 
    	        {
    	            flag=1;
    	            break;
    	        }
    	    }
    	    if(flag==1)
    	        NO();
    	    else
    	        YES();  
        }
        t.clear();
	}
	return 0;
}
