// check prime  number 
#include <iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int num = 2; num<a; num++)
	{
		if(a%num == 0)
		{
		   cout<<"Is a non prime number"<<endl;
		   break;
		}
		
	}
}