#include<iostream>


using namespace std;

class Demo
{
	public:
		int i = 29;
	void fun()const
	{
		cout<<i<<"\n";
	}
	void fun()
	{

	}
};
int main()
{
    const Demo obj1;
    obj1.fun();
}
//ith aapn constant use krun pn overloading kru shkt nahi 
