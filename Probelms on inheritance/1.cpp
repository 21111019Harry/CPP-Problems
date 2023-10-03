#include<iostream> 


using namespace std;


class Demo
{
	public:
		int i;
		int j;
        static int o;
        const int q;
	Demo():q(151)
	{
		i = 119;
		j = 21;
		cout<<"Inside Base constructor:"<<"\n";
	}
	void fun()
	{
		cout<<i<<"\n";
		cout<<"Fun:"<<"\n";
	}
	void gun()
	{
		cout<<j<<"\n";
		cout<<"Gun:"<<"\n";
	}
	~Demo()
	{
		cout<<"Base 1 Destructor:"<<"\n";
	}
};
int Demo::o = 31;
//ith aapn public inheritance ne inherit kely mhnje Demo che sgle contain Hello la jasechya tshe miltil mhnje public madhele public madhe yetil private madhle private madhe yetil protected madhle protected madhe yetil.
class Hello:public Demo
{
	public:
		int x;
		int y;
	Hello()
	{
		x = 51;
		y = 101;
		cout<<"Inside Derived constructor:"<<"\n";
        i++;           //ith aapn base class cha i increase kela ahe.
        cout<<i<<endl; //he Demo cha i variable ahe to yala direct bhetla ahe
        cout<<o<<endl; // -//- he fkt static ahe
        cout<<q<<endl; // -//- he fkt constant ahe
	}
	void sun()
	{
		cout<<x<<"\n";
		cout<<j<<"\n";//ith aapn j print kelay but to base class cha ahe pn base ch derived class la milt
		cout<<"Sun"<<"\n";  
		gun();//same base class ch derived class la milt bheviour pn
	}
	~Hello()
	{
		cout<<"Derived 2 Destructor:"<<"\n";
	}
};
int main()
{
	Demo obj;
	cout<<sizeof(obj)<<"\n";
	cout<<obj.i<<"\n";
	cout<<obj.j<<"\n";

	obj.fun();
	obj.gun();

	Hello hobj;
	cout<<sizeof(hobj)<<"\n";
	cout<<hobj.x<<"\n";
	cout<<hobj.y<<"\n";
	cout<<hobj.i<<"\n";
	cout<<hobj.j<<"\n";

	hobj.fun();   //he chalel bcz class Hello ha Demo la publicly inherit kroty
	hobj.gun();   //--//--
	hobj.sun();

	return 0;

}
//ya code ch explaintion rgular chya notbook madhe ahe aani constructor and destructor calling sequence pn ahe 
//base and derived class madhe aani access specifier ch pn ahe base class madhun derived class madhe kay kay bhett
//te aani he architecture nusar single level inheritance ahe bcz aapn Demo la Hello madhe inherit krtoy.
//ha inheritance cha 1 st type ahe.
//aani access specifier nusar public inheritance ahe.
//aapn mhtlo ki sigle level inheritance or public inheritance madhe base class ch sgl derived class la milt pn te
//derived class ks accept krto tyavr thrt to publicly gheto ki privately gheto ki proectedly gheto. mg yavrun 
//thrt ki tyala base class ch kay kay milnar te.
//
//
//jr base class madhe data public asel aani derived class jr base class la publicly acess krt asel tr derived class la te public madhe ch milt.
//jr base class madhe data private asel aani derived class jr base class la publicly acess krt asel tr derived class la te not accessible ast mhnje tyala te milt nahi.(te fkt base class madhech acess hoil)
//jr base clas  madhe data protected asel aani derived class jr base class la publicly acess krt asel tr derived class la te not accessible ast.(te fkt base class madhe and immediet derived class madhe acess hotil)
