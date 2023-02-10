// write a program to output whether a number is divisible by 2 and 3 or divisible by only one of them

#include <iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number"<<endl;
	cin>>n;
	if(n%2==0&&n%3==0)
	{
		cout<<"The num is divisible by both"<<endl;
	}
	else if  (n%2==0 || n%3==0)
	{
		cout<<"divisible by one of them"<<endl;
		
	}
	else
	{
		cout<<"Is not divisible by none of them"<<endl;
	}
	return 0;
}