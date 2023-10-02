#include<iostream>
using namespace std;
void position(int myp,int frp);
main()
{
	int myp;
	cout<<"Enter your position: ";
	cin>>myp;
	int frp;
	cout<<"Enter your friend's position: ";
	cin>>frp;
	position(myp,frp);
	
}
void position(int myp,int frp)
{
	if(frp-myp <= 6 )
	{cout<<"true";}
	else
	{cout<<"false";}
}