#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
	void fun()
	{
		cout<<i<<"\n";
	}
	private:
	
	void fun()
	{
		cout<<i<<"\n";
	}
};
//ha code runch honar nahi overload honar nahi bcz access specifier change krun function overload hot nahi 
//aata jr ith public madhe or private madhe mhnje 2 function madhun eka function madhe aste tr function overloading zal ast
//jri parametere asle aste tr function overload zal ast mhnje void public:fun(int i), private:fun() as ast tr function overloading zal ast or ult ast tri overload zal ast bcz function overloading la access specier cha kahi sabndh nasto.
