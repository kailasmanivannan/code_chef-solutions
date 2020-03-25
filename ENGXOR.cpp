#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long int t,n,q,i,ar,odd,even,p;
	bool res;
	cin>>t;
	while(t--)
	{
	    odd=even=0;
	    cin>>n>>q;
	    for(i=0;i<n;i++)
	    {
	        cin>>ar;
	        res = __builtin_parity(ar);
	        res?odd++:even++;
	    }
	    while(q--)
	    {
	        cin>>p;
	        res = __builtin_parity(p);
	        if(res%2==0)
	        {
	           cout<<even<<' '<<odd<<"\n";
	        }
	        else
	        {
	             cout<<odd<<' '<<even<<"\n";
	        }   
	    }
	}
	return 0;
}
