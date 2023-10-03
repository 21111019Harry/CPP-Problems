#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
	Demo()
	{
		i = 20;
		j = 30;
	}
	void fun()
	{
		cout<<"Inside fun:"<<"\n";
	}
};
class Hello:Demo
{
	public:
		int k;
		int l;
	Hello()
	{
		k = 30;
		l = 20;
	}
	void gun()
	{
		cout<<"Inside gun:"<<"\n";
		cout<<k<<"\n";
		cout<<i<<"\n";
		fun();
	}
};
int main()
{
	Demo dobj;
	dobj.fun();
	cout<<dobj.j<<"\n";

	Hello hobj;
	hobj.gun();
//	hobj.fun();
	cout<<hobj.l<<"\n";
//	cout<<hobj.j<<"\n";
}
