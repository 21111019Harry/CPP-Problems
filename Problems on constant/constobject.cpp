#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
		int k ;
	Demo()
	{
		this -> i = 0;
		this -> j = 0;
		this -> k = 0;
	}
	Demo(int x, int y, int z)
	{
		this -> i = x;
		this -> j = y;
		this -> k = z;
	}
};
int main()
{
	Demo obj1;
	const Demo obj2;
	const Demo obj3(11,21,51);
	cout<<obj3.i<<"\n";
	Demo obj4(10,20,30);
	obj1.i = obj1.i+2;//ith i chi value 2 hoil aadhi 0 hoti mg 0+2=2 as.
	cout<<obj1.i<<"\n";

	obj1.i = 50;
//	obj2.i = 51;//he nahi chalnar bcz obj2 ha constant ahe aata tyachi value change nahi hou shkt
//	obj3.i = 51;// -//-
	obj4.i = 51;
	cout<<obj4.i<<"\n"<<obj1.i<<"\n";
	return 0;
}
