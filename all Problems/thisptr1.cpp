#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
	Demo()
	{
		i = 0;
		this -> j = 0;
	}
	Demo(int i, int j)
	{
	//	i = i;// same khalch ahe
	//	j = j;//ith error yeil bcz parametre pn i,j aani charectristic pn i,j ahe mhnunch yasathi this 
	//	pointer lagto.
		this -> i = i;
		this -> j = j;
		this -> fun(11);
	}
	Demo(Demo &ref)
	{
		this -> i = ref.i;
		this -> j = ref.j;
	}
	void fun(int no)//fun(Demo * const this, int no)
	{
		cout<<no<<"\n";
		cout<<this ->i<<"\n";
		cout<<this<<"\n";//ith aapn address print kela ahe obj1 and obj2 cha mhnje obj1 ne ya funtion la 
		//call kel tr obj1 chya object cha address print hoil tsch same object 2 sathi hoil.
	}
	void gun()
	{
		this -> fun(51);
	}
};
int main()
{
	Demo obj1;
	Demo obj2(11,21);
	
	Demo obj3(obj2);

	obj1.fun(101);
	obj2.fun(201);
	obj1.gun();

	return 0;
}
