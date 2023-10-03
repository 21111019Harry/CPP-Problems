#include<iostream>

using namespace std;

class Arithmatic
{
	public:
		int ino1;
		int ino2;
		int ians;

	Arithmatic()//default constructore
	{
		cout<<"Inside Default Constructor:\n";
		ino1 = 0;
		ino2 = 0;
		ians = 0;
	}
	Arithmatic(int x, int y)//parameterized constructore
	{
		cout<<"Inside Parametrized Constructor:\n";
		ino1 = x;
		ino2 = y;
		ians = 0;
	}
	Arithmatic(Arithmatic &ref)//copy constructore
	{
		cout<<"Inside Copy Constructor:\n";
		ino1 = ref.ino1;
		ino2 = ref.ino2;
		ians = ref.ians;
	}
	~Arithmatic()
	{
		cout<<"Inside Destructor:\n";
	}
	void Add()
	{
		ians = ino1+ino2;
	}
	void Sub()
	{
		ians = ino1-ino2;
	}
};
int main()
{
	Arithmatic obj1;
	Arithmatic obj2(10,3);
	obj1.Add();
	cout<<obj1.ians<<"\n";//ith o/p 0 yeil bcz aapn ith first object madhe valuech pathvlya nahit mhnun tyane 
        //ino1 0,ino2 0,ians 0 ashya value ghetlya	
	obj1.Sub();
	cout<<obj1.ians<<"\n";//0 -//-
	obj2.Add();
	cout<<obj2.ians<<"\n";//o/p 13 bcz 10+3
	obj2.Sub();
	cout<<obj2.ians<<"\n";//o/p 7 bcz 10-3
	Arithmatic obj3(obj2);//ith as vaat copy constructor cha call ahe pn as nahiye ith aapn new object banvtoy 
	//obj3 navachya bcz constructor ha implicit call hoto aaplyala call kraychi garj naste
	cout<<obj3.ians<<"\n";//o/p 7 bcz 10-3
	obj3.Add();
	cout<<obj3.ians<<"\n";//o/p 13 bcz 10+3
}
