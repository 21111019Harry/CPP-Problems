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
		cout<<i<<"\n";
		cout<<"Inside fun1:"<<"\n";
	}
	void fun(int k)
	{
		cout<<j<<"\n";
		cout<<"Inide fun2:"<<"\n";
	}
	~Demo()
	{
		cout<<"Base Destructor:"<<"\n";
	}
};
//ith aapn Demo che contain private inheritance ne inherit krtoy mhnje Demo che sgle contain Hello chya private madhe 
//janar bcz aapn private inheritance krtoy Demo la
class Hello:private Demo
{
	public:
		int x;
		int y;
	Hello()
	{
		x = 51;
		y = 101;
		cout<<"Derived Constructor:"<<"\n";
        i++;
        cout<<i<<endl;
	}
	void gun()
	{
		cout<<x<<"\n";
		cout<<j<<"\n";
		cout<<"Inside gun"<<"\n";
	}
	void gun(int j, int p)
	{
		cout<<y<<"\n";
		cout<<"Inside gun2:"<<"\n";
	}
	~Hello()
	{
		cout<<"Derived Destructor:"<<"\n";
	}
};
//ith aapn hello class la private inheritance ne inherite krtoy mhnje aata Hello che contain sgle pucsd chya private madhe janar
class pucsd:private Hello
{
	public:
		int j;
		int k;
	pucsd()
	{
		j = 31;
		k = 41;
		cout<<"Grand Child Constructor:"<<"\n";
	}
	void run(int ino, int no)
	{
		cout<<k<<"\n";
		cout<<"Iside run1:"<<"\n";
		cout<<x<<"\n";
	}
	void run(int i)
	{
		cout<<j<<"\n";
		cout<<"Inside run2:"<<"\n";
	}
	~pucsd()
	{
		cout<<"Grand child Destructor:"<<"\n";
	}
};
int main()
{
	Demo dobj;
	cout<<sizeof(dobj)<<endl;
	cout<<dobj.i<<endl;

	dobj.fun(11);
	dobj.fun();

	Hello Hobj;
	cout<<sizeof(Hobj)<<endl;
	cout<<Hobj.y<<endl;

	Hobj.gun();
	Hobj.gun(21,31);

	pucsd pobj;
	cout<<sizeof(pobj)<<endl;
	cout<<pobj.k<<endl;

	pobj.run(10,20);
	pobj.run(30);
//    pobj.fun(111);  //he nahi chalnar bcz class pucsd ha class Hello la privately acess krtoy
//    pobj.gun();    //--//--
}
//aata ith constructor and destructor calling technique difficult ahe
//ith first object create zalyavr base class cha constructor call hoto nantr aapn jevha derived class cha object create krto tevha pn aadhi base class cha constructor call hoto mg derived class cha constructor call hoto nantr mg 
//aapn jr grand child cha object create kela tr sglyat aadhi base class cha constructor call hoil mg nantr derived 
//class cha constructor call hoil mg nantr grand chile class cha constructor call hoil
//aani aata yach exact ulta destructor call hoto aadhi grand chaild cha mg derived cha aani nantr mg base class cha
//aani he mutilevel inheritance ahe. bcz ith Demo la Hello ne inherit kely aani Hello la pucsd ne inherit kely mhnun
//ha inheritance chya 2 nd type ahe.
//aani ith function overloading pn kely base class madhe fun he function overloading kely derived class madhe gun he function overloading kely aani grand child madhe run he function overloading kely. 
//base class ch grand child class la kay kay milel he 2 gostivrun thrt 1 st mhnje Base ne te kuth thevly mhnje public,private,protected yatun kuth thevly 2 nd mhnje grand child chya parent class ne te ks ghetly mhnje Hello ne Demo
//kdun ks ghetly public,private,protected.
//
//jr ith base class madhe data public asel aani derived class jr base class la privately acess krt asel tr derived class la base class ch kahich milt nahi mhnje not accessible ast.(te fkt base class madhe accessible ast)
//jr ith base class madhe data private asel aani derived class jr base class la privately acess krt sel tr derived class la base class ch kahich milt nahi mhnje not accessible ast.(te fkt base class madhech acess hoil)
//jr ith base class madhe da((ta protected asel aani derived class jr base class la privetly acess krt asel tr derived class la base class ch kahich milt nahi mhnje not accessible.(te fkt base class madhech acess hoil)
