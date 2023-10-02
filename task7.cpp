#include<iostream>
using namespace std;
void flowershop(int redRose,int whiteRose,int tulip);
main()
{
	int redRose,whiteRose,tulip;
	cout<<"Red Rose: ";
	cin>>redRose;
	cout<<"White Rose: ";
	cin>>whiteRose;
	cout<<"Tulips: ";
	cin>>tulip;
	flowershop(redRose,whiteRose,tulip);

}

void flowershop(int redRose,int whiteRose,int tulip)

{	float finalprice;
	float oprice;
	oprice= (2*redRose+4.10*whiteRose+2.50*tulip);
	cout<<"Original Price: $"<<oprice<<endl;
	float discount;
	discount=0.2*oprice;
	if(oprice>200)
	{finalprice=oprice-discount;
	cout<<"Price after Discount: $"<<finalprice;}
	if(oprice<=200)
	{cout<<"No discount applied.";}
}
	
	
	