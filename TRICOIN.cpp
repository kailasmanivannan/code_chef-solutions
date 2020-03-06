#include <iostream>
#include <math.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	long int n;
	cin >> t;
	while(t--)
	{
	    cin>>n;
	    n=n*2;
	    n=-n;
	    float dis = 1-4*n;
	    float root1=(-1 + sqrt(dis)) / 2;
	    float root2=(-1 - sqrt(dis)) / 2;
	    root1=(long int)root1;
	    root2=(long int)root2;
	    if(root1>=0)
	    {
	        cout<<root1;
	    }
	    else if(root2>=0)
	    {
	        cout<<root2;
	    }
	   cout<<endl; 
	}
	return 0;
}
