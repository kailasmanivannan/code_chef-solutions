#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t,n,i,size,x,y;
    char ch,pre;
    string ar;
	cin>>t;
	while(t--)
	{
	    x=y=0;
	    ar.clear();
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>ch;
	        if(i==0)
	        {
	            ar.push_back(ch);
	            pre = ch;
	        }
	        else
	        {
	            if(pre==ch)
	            {
	                continue;
	            }
	            else
	            {
	                if((pre=='L'&&ch=='R')||(pre=='R'&&ch=='L'))
	                { continue;}
	                else if((pre=='D'&&ch=='U')||(pre=='U'&&ch=='D'))
	                { continue; }
	                else
	                {
    	                ar.push_back(ch);
    	                pre = ch;
	                }
	            }
	        }
	    }
	    size = ar.length();
	    for(i=0;i<size;i++)
	    {
	        switch(ar[i])
	        {
	            case 'L':x--;
	                     break;
	            case 'R':x++;
	                     break;
	            case 'U':y++;
	                     break;
	            case 'D':y--;
	                     break;
	        }
	    }
	    cout<<x<<' '<<y<<"\n";
	}
	return 0;
}
