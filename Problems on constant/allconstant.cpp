#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
		const int k;//he constant charectristics ahe

	Demo():k(11),i(10)
	{
		this -> j = 0;
		cout<<i<<"\n";//ith 10 as 2 veles print hoil 2 veles ka tr aapn 2 object create kele ahet mhnun
	}
	void fun(int x, int y)
	{
		i++;//allowed
		j++;//allowed
	//	k++;//not allowed bcz its constant
		x++;//allowed
		y++;//allowed
	}
	void gun(int x, const int y)//he fun sadh ahe pn 1 parameter constant ahe y
	{
		i++;//allowed 
		j++;//allowed
	//	k++;//not allowed bcz its constant
		x++;//allowed
	//	y++;//not allowed bcz its constant parameter 
	}

	//aata he fun constant ahe tyat 2 parameter ahe 1 sadha ahe mhnje x aani 1 constant ahe mhnje y
	void sun(int x, const int y)const
	{
		const int no1 = 11;//he constant variable ahe
		int no2 = 21;//ha sadha variable ahe
	//	i++;//not allowed bcz he constant fun ahe aani he caller object che contain change nahi kru det
	//	j++;// -//-
	//	k++;// yaat 2 reason ahet not allowed che first he constant function aani 2nd k he swathaha 
		//constant ahe
		x++;//allowed bcz he parameter ahe
	//	y++;//not allowed bcz y ha constant ahe
	//	no1++;// -//-
		no2++;// allowed bcz no2 constant nahiye
	}
};
int main()
{
	Demo obj1;
	const Demo obj2;

	obj1.fun(10,20);//allowed
	obj1.gun(10,20);// -//-
	obj1.sun(10,20);// -//-

//	obj2.fun(10,20);//not allowed bcz obj2 is constant
//	obj2.gun(10,20);// -//-
	obj2.sun(10,20);// allowed

	obj1.i++;//allowed
	cout<<obj1.i<<"\n";
	obj1.j++;// -//-
//	obj1.k++;//not allowed bcz its constant

//	obj2.i++;//not allowed
//	obj2.j++;// -//-
//	obj2.k++;// -//-
} 
