#include<iostream>
using namespace std;
int main()
{
	int s;
	cout<<"enter a num"<<endl;
	cin>>s;
	if(s>0)
	{
		cout<<"Positive number";
	}
	else if(s==0)
	{
		cout<<"neither positive nor negative";
	}
	else
	{
		cout<<"Negative number";
	}
}
