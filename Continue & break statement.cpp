//jumps in loops

#include <iostream>
using namespace std;
int main()
{
	int pocketmoney = 3000;
	for(int date =1; date<=20; date++)
	{
		if(date % 2 == 0)
		{
			continue;  //continue statement is used to the next iteration of the loop
		}
		
		if(pocketmoney == 0)
		{
			break; // break is used to terminate the loop
		}
		cout<<"You can go outside"<<endl;
		pocketmoney = pocketmoney - 300;
	}
}