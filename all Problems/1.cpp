#include<iostream>


using namespace std;


class Demo
{
//	public;//he access specifier ahe public mhnje no abstraction  
	int i;//he charecteristic ahet class che 
	int j;//-//-

Demo () //he default constructor ahe he program chalu zalyavar saglyat aadhi call honar fun ahe aani constructor che 3 type ahet default,parameterized,copy constructor ase 
	//default mhnje kahi ghet nahi kahi det nahi parameterized mhnje to kahitri parameter ghetoy copy mhnje dusryasarkha de mhnje dusraychi copy krne
{
	std::cout<<"Inside Deafult Constructure:";
}
Demo (int i)//he parameterized constructure ahe karn he kahitri parameter ghety
{
	std::cout<<"Inside Paramerterized Constructure:";
}
~ Demo ()//he destructure ahe he program sampnyachya aadhi shevtch call honar function ahe destructure la typr nastat he constructurechya ekdm opposite ast mhnje constructure aaplyala 
      //memory milun deto program mahde use krnyasathi aani mg destructur he program band honyachya aadhi ti milaleli memory prt krto	
{
	std::cout<<"Inside Destructure:";
}
void Fun()//he behaviour ahe class madhe charectristic and behaviour ektra aale mhnje class create hoto
{
	std::cout<<"Inside Fun:";
}
void Gun()//he pn ek behaviour ahe
{
	std::cout<<"Inside Gun:";
}
};//end of class ith structure sarkhch ; dyav lagt


int main()
{
	std::cout<<"Inside Main:";
	Demo obj1();//ith aapn object create kela
	Demo obj2(21);
/*	obj1.Fun();//ha function cha call ahe
	obj1.Gun();
	cout<<"obj.i";*/
	return 0;
}
//jab hum statically object create krte hai tab destructor automatic call hota hai but jab hum object dynamically create krte hai tab hamain manually distructor lihna pdta hai.
//statically object create means :- Demo obj1;
//dynamically object creat means :- Demo *obj2 = new Demo(); to iske liye hamin distructor call krna pdega to sifr delete d; asia likhna hota hai.
