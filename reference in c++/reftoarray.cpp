#include<iostream>
using namespace std;

int main()//ith aapn class nahi banvla pn tri he chalt
{
//	int &arr [3];//he chalt nahi aapn reference cha array nahi banu shkt
	int arr[3]={10,20,30};
	int (&ref)[3]=arr;//pn aapn ith array la reference lavu shkto
	cout<<arr<<"\n"<<&arr<<"\n";
	cout<<ref<<"\n"<<&ref<<"\n";//ith aapn yala array sarkh use kru shkto mhnje array sarkh ha ref variable ahe
	cout<<arr[0]<<"\n"<<ref[0]<<"\n";
	cout<<arr+1<<"\n"<<ref+1<<"\n";//ha purn array sarkha beheve krto karn ha array cha reference ahe mhnun

}
