#include<iostream>


using namespace std;

class Demo
{
	public:
		int i;
		int j;
	Demo()
	{
		i = 10;
		j = 20;
	}
	virtual void fun()
	{
		cout<<"Base fun:"<<"\n";
		cout<<i<<"\n";
		cout<<j<<"\n";
	}
	void gun()
	{
		cout<<"Base gun:"<<"\n";
	}
};
class Hello:public Demo
{
	public:
		int p;
		int q;
	Hello()
	{
		p = 30;
		q = 40;
	}
	void fun()
	{
		cout<<"Derived fun:"<<"\n";
		cout<<p<<"\n";
		cout<<q<<"\n";
	}
	void gun()
	{
		cout<<"Derived gun:"<<"\n";
	}
};
int main()
{
	Demo dobj;
	Hello hobj;
	Demo *dp = NULL;//ith aapn base class cha pointer create kela ahe
	Hello *hp = NULL;

	dobj.fun();//ith base class ch function call hoil
	hobj.fun();//ith derived class ch function call hoil

	dp = &hobj;//ith aapn pointer madhe derived class cha object cha address taktoy he up casting ahe.
	dp = &dobj;//ith aapn tya pointer madhe base class object cha address taktoy he no casting ahe.
	//ith aapn pointer madhe base class cha address taktoy he down casting zal hech nahi chalt ith bcz pointed 
	//type kami and pointer type jast ahe mhnun.
	//hp = &dobj;
	hp = &hobj;//ith aapn pointer  madhe derived class cha object cha address taktoy he no casting ahe


	dp -> fun();//ith Base class ch function call hoil bcz jyacha object tyach function
	dp -> gun();// -//-
	

	hp -> fun();
	hp -> gun();
	//aata ith aapn derived class chya object ne fun function call kru
	dp -> fun();//he up casting ahe bcz pointer base class cha ahe aani
	hobj.fun();
	dobj.fun();
}
//ppa 23 lect 26 ya recording madhe sgl ahe he 1.20.00 pasun eka hi recording
