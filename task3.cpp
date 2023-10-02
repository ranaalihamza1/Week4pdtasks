#include<iostream>
using namespace std;
void finalprice(string country,float ticketprice);
main()
{
	string country;
	cout<<"Enter the country's name: ";
	cin>>country;
	float ticketprice;
	cout<<"Enter the ticket price in dollars: $";
	cin>>ticketprice;
	finalprice(country,ticketprice);
}
void finalprice(string country,float ticketprice)
{	float finalprice;
	if(country=="Pakistan")
	{finalprice = ticketprice - (ticketprice*0.05);}
	if(country=="Ireland")
	{finalprice = ticketprice - (ticketprice*0.1);}
	if(country=="India")
	{finalprice = ticketprice - (ticketprice*0.2);}
	if(country=="England")
	{finalprice = ticketprice - (ticketprice*0.3);}
	if(country=="Canada")
	{finalprice = ticketprice - (ticketprice*0.45);}
	
	cout<<"Final ticket price after discount: $"<<finalprice;
	
}
	
	
	