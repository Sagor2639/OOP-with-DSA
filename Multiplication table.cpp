// multiplication table

#include<iostream>
using namespace std;
int main()
{
	int c;
	cout<<"Enter the positive number"<<endl;
	cin>>c;
	for(int i = 1; i<=30; i++)
	{
		cout<<c<<"*"<<i<<"="<<c*i<<endl;
	}
	return 0;
}