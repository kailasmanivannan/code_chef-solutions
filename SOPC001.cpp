#include <iostream>
using namespace std;

int main() {
    int testcase,n,i;
    cin >> testcase;
    while(testcase--)
    {
        cin >> n;
        int max = 1,dif = 0,count = 0;
        int ar[n];
        for(i = 0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]>max)
            {
                max = ar[i];
            }
        }
        for(i = 0;i<n;i++)
        {
            if(max>ar[i])
            {
                dif = dif + (max - ar[i]);
                count ++;
            }
            
        }
        cout<<dif<<' '<<(count+1)<<endl;
    }
	return 0;
}
