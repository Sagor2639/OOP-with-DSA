//conditional logic pogamming 
#include <iostream>
using namespace std;
int main()
	{
		int a,b,c;
		cout<<"Enter the num a : \n";
		cin>>a;
		cout<<"Enter the num b : \n";
		cin>>b;
		cout<<"Enter the num c : \n";
		cin>>c;
		if(a>b) //this is called nested loop which is very common in python 
		{
			if(a>c)
			{
				cout<<"a is the max num\n";
			}
			else
		{
			cout<<"c is the max num\n";
		}
		    
	}
		 else
		 {
			if(b>c){
				cout<<"b is the max num\n";
			}
			else{
				cout<<"c is the max num\n";
			}
		}
		}
	