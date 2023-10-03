#include<iostream>


using namespace std;


class Demo
{
	public:
		int i; 
		int j;
	Demo()
	{
		i = 100;
		j = 200;
		cout<<"Base Constructor:"<<"\n";
	}
	void fun()
	{
		cout<<"Inside fun1"<<"\n";
		cout<<j<<"\n";
	}
	void fun(float f, int p)
	{
		cout<<"Inside fun2"<<"\n";
		cout<<i<<"\n";
	}
	~Demo()
	{
		cout<<"Base Destructor:"<<"\n";
	}
};
class Hello
{
	public:
		int x;
		int y;
	Hello()
	{
		x = 31;
		y = 51;
		cout<<"Other Constructor:"<<"\n";
	}
	void gun(int no)
	{
		cout<<no<<"\n";
		cout<<"Inside gun1"<<"\n";
	}
	int gun(int a, int b)
	{
		int c = a+b;
		cout<<c<<"\n";
		cout<<"Inside gun2"<<"\n";
		return c;
	}
	~Hello()
	{
		cout<<"Other Destructor:"<<"\n";
	}
};
//aata ith aapn 2 class la 1 class madhe inherit kely yaala architecture nusar Multiple inheritance mhntat mhnje 2 
//class pasun 1 inherit hone aani aapn yala access specificer nusar proctected inherite kely 
class Marvellous:protected Demo,Hello
{
	public:
		int o;
		int p;
	Marvellous()
	{
		o = 111;
		p = 121;
		cout<<"Child Constructor:"<<"\n";
	}
	void run()
	{
		cout<<x<<y<<"\n";
		cout<<"Inside run1"<<"\n";
	}
	void run(int g)
	{
		cout<<p<<"\n";
		cout<<"Inside run2"<<"\n";
	}
	~Marvellous()
	{
		cout<<"Child Destructor:"<<"\n";
	}
};
int main()
{
	Demo dobj;
	dobj.fun(10.2,30);
	cout<<dobj.j<<"\n";

	Hello Hobj;
	int iRet = Hobj.gun(10,90);
	cout<<iRet<<"\n";

	Marvellous Mobj;
	cout<<Mobj.p<<"\n";
	Mobj.run();
}
//ith aapn acess specifier nusar protected inheritance ne inherite kely. mhnje ith Demo aani Hello che contain Marvellous madhe yetil Demo cha public ha Marvellous chya protected madhe yeil same Hello cha public Marvellous chya protected madhe yeil nantr Demo aani Hello private ha Marvellous chya private madhe yeil nantr prt Demo aani Hello cha 
//protected ha Marvellous chya protected madhe yeil as.
//aani ith architecture nusar he Multiple inheritance kely ha inheritance cha 3rd type ahe yaat 2 base class pasun
//ek derived class create hoto yalach Multipal inheritance mhntat ha 3 rd type ahe inheritance cha.
//
//aata ith jevha Marvellous class la memory milel tevha ti memory kashi milel mhnje sequence kashi asnar box chi 
//tr ans ahe aadhi Demo la memory milnar mg Hello la memory milnar mg last a Marvellous la memory milnar 
//he ka zal bcz Marvellous cya pud : chya pud aapn js declear kru tya sequence madhe memory milte.
//
//jr ith base class madhe data public asel aani derived class jr base class la protectedly acess krt asel tr derived class la base class ch sgl milt but derived class ha immediet derived class pahije base class cha. (te fkt base class madhe and immediet  derived class madhe access kru shkto)
//jr ith base class madhe data private asel aani derived class jr base class la protectedly acess krt asel tr derived class la base class ch kahich milt nahi mhnje not accessible.(te fkt base class madhch acess kru shkto)
//jr ith base class madhe data protected asel aani derived class jr base class protectedly acess krt asel tr derived class la base class ch kahich milt nahi mhnje not accessible.(te fkt base class madhe and immediet derived class madhe acess kru shkto)
