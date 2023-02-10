// switch statement 

#include <iostream>
using namespace std;
int main()
{
	char button;
	cout<<"Input the character"<<endl;
	cin>>button;
	
	switch (button)
	{
		case 'a':
			cout<<"Hello"<<endl;
			break;
		case 'b':
			cout<<"Hallo"<<endl;
			break;
		case 'c':
			cout<<"ciao"<<endl;
			break;
		case 'd':
			cout<<"Broken"<<endl;
			break;
			
		default:
		
		cout<<"I am still learning C++"<<endl;
		break;
	}
	
		
	return 0;
}