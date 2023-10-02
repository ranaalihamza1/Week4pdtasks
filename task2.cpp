#include<iostream>
using namespace std;
void reverse(string in1);
main()
{
	string in1;
	cout<<"Enter 'true' or 'false': ";
	cin>>in1;
	reverse(in1);
}
void reverse(string in1)
{
	if(in1=="true")
	{cout<<"false";}
	if(in1=="false")
	{cout<<"true";}
}