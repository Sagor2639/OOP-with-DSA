// for loop using 
#include<iostream>
using namespace std;
int main()
{
	int c;
	cin>>c;
	int sum = 0;
	for(int count=1; count<=c;count++) //counter variable here is count which maintain iteration
	{
		sum = sum + count;
		
	}
	cout<<sum;
	return 0;
}