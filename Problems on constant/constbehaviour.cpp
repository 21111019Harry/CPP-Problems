#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
	Demo()
	{
		this -> i = 0;
		this -> j = 0;
	}
	void fun(int x)//he internally fun(Demo *const this,11)as jat
	{
		i++;//ith i chi value ekane increase hoil
		j++;//ith j -//-
		x++;//ith x chi -//-
		cout<<x<<"\n";//ith 12 print hoil bcz parameter 11 aaly aani aapn tyala ++ kely mhnun
	}
	void gun(int x)const
	{
		//he 2 statement not allowed ahet bcz he function constant ahe aani constant function madhe aapn
		//caller object che contain change nahi kru shkt
	//	i++;
	//	j++;
		x++;//he chalel bcz he caller object ch nahiye he i/p argument ahe mhnun he chalel
		cout<<i<<endl;
        cout<<x<<endl;
	}
};
int main()
{
	Demo obj1;
	const Demo obj2;  
	obj1.fun(11);
    obj1.gun(5);
//    obj2.fun(7);   // he nahi chalt constant object non constant fucntion la call nahi kru shkt. pn he confusion ahe 
	obj2.gun(11);
	cout<<obj1.i<<"\n";
}

//constant object ha constant function and non constant function la pn call kru shkto eg. obj2 ha gun la pn and fun la pn call krtoy
//non constant object ha constant function and non constant function la pn call kru shkto eg. obj1 ha fun la pn and gun la pn call krtoy.



