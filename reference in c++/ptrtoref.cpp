#include<iostream>
using namespace std;


class Demo
{
	int i;
	int j;
	int k;
};

int main()
{
	int no=11;
	int &ref=no;//ith aapn ek pointer creat kela ahe aani to pointer no ya variable la point krtoy aani  no variable la ref as reference name dil ahe mhnje to pointer ref la pn point krtoy mhnje he pointer to reference ahe
	int *p=&ref;
	cout<<no<<"\n"<<ref<<"\n";//ith aapn no aani tyacha reference mhnje ref yachi value print keli ahe
	cout<<&ref<<"\n"<<&no<<"\n"<<p<<"\n";//ith ya 3 op same yenar karn no aani ref he ekch ahet aani tyancha address p navachya pointer madhe store ahe


	int no1=11;
	int *ptr=&no;

	int *(&r)=ptr;//ith aapn direct pointer lach reference lavlay mhnje pointer la aata ptr,r as nav asnar mhnje pointer js work krel ts r pn work krel
	cout<<no1<<"\n"<<&no1<<"\n";
	cout<<r<<"\n"<<ptr<<"\n";//ith aapn r aani ptr chi value print keli ahe mhnje tyachya no1 cha address hota
	cout<<*ptr<<"\n"<<*r<<"\n";//ith r ha reference variable pointer ptr sarkh beheave krtoy karn ha ptr cha reference ahe mhnun
       	

	int *(ref1)=r;//ith aapn pointer la dusra ref1 navacha reference lavla ahe ha pn pointer srkha beheve krel
	cout<<*ref1<<"\n"<<*ptr<<"\n";	



}
