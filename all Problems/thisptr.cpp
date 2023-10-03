#include<iostream>


using namespace std;

class Demo
{
	public:
		int i;
		int j;
	void fun(int x)//ha call internally asa fun(Demo * const this, int x) jato ith this poiner use hoto
	{
		cout<<"fun function:\n";
		cout<<x<<"\n";
	}
	void gun(int a, int b)//gun (Demo * const this, int a, int b)
	{
		cout<<"gun function:\n";
		cout<<a<<"\t" <<b<<"\n";
	}
};
int main()
{
	Demo obj1;
	obj1.fun(11);// fun(&obj1,11) obj1 cha address hold krayla pointer lagto mhnun iternally this pointer use
	//hoto
	obj1.gun(50,60);// gun(&obj1,50,60)

	Demo obj2;
	obj2.fun(21);// fun(&obj2,21)
	obj2.gun(70,80);// gun(&obj2,70,80)
	return 0;
}
