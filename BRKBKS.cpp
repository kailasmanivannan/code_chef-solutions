#include <iostream>
using namespace std;

int main() {
    int testcase ;
    int s,w1,w2,w3,count;
    cin >> testcase ;
    while(testcase--)
    {
        count = 0;
        cin >> s >> w1 >> w2 >> w3 ;
        if((w1+w2+w3)<=s)
        {
            count = 1;
        }
        else if(((w1+w2)<=s)||((w2+w3)<=s))
        {
            count = 2;
        }
        else
        {
            count = 3;
        }
        cout << count <<endl;
    }
	return 0;
}
