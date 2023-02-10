///check prime number 
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	int i;
	for (i =2; i<a; i++)
	{
		if(a%i ==0)
		{
			cout<<"It is a non prime num"<<endl;
			break; 
		}
	
	}
	if(i==a)
	{
			cout<<"It is a prime num"<<endl;
	}

	return 0;
}
