#include<iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"enter x,y"<<endl;
	cin>>x>>y;
	if(x<0&&y<0)
	{
		cout<<"This point lies in third quadrant.";
	}
	else if(x>0&&y>0)
	{
		cout<<"This point lies in first quadrant.";
	}
	else if(x<0&&y>0)
	{
		cout<<"This point lies in second quadrant.";
	}
	else
	{
		cout<<"This point lies in forth quadrant.";
	}
}
