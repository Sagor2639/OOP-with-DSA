// writ a program check if a triangle is scalene, isosceles or equilatera
#include<iostream>
using namespace std;
int main()
{
	int t1,t2,t3;
	cout<<"Ente the sides of a triangle "<<endl;
	cin>>t1>>t2>>t3;
	
	if(t1==t2&&t2==t3)
	{
		cout<<"This is an equilateral triangle"<<endl;
	}
	else if (t1==t2||t2==t3||t3==t1)
	{
		cout<<"This is a isoscales triangle"<<endl;
	}
	else
	{
		cout<<"This is a scalene triangle"<<endl;
	}
	return 0;
}