///write a code for simple calculator using switch
#include <iostream>
using namespace std;
int main()
{
	float a,b;
	cout<<"Input 2 numbers"<<endl;
	cin>>a>>b;
	
	char op;
	cout<<"Input and operator"<<endl;
	cin>>op;
	
	switch (op)
	{
		

		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			cout<<a/b<<endl;
			break;
			
		default:
			cout<<"i am still waiting"<<endl;
			break;
		}
		return 0;
}
