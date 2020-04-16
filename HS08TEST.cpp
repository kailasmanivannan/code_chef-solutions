#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	double balance;
	int withdraw;
	cin>>withdraw>>balance;
	if((withdraw%5==0)&&(balance>(withdraw+0.50)))
	{
	    cout<<(balance-withdraw-0.50);
	}
	else
	    cout<<balance;
	return 0;
}
