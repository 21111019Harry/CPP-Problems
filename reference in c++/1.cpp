#include<iostream>

using namespace std;
class Demo//ha class eg mhnun ghetlay mhnun chota ahe
{
	int i;
	int j;
	int k;
};

int main()
{
	int no=10;
	int *p=&no;//ith p ha pointer ahe ki jo no la point krtoy mhnje pointer la 4 byte memory milnar aadhisarkh ptr kunachahi asla kuthehi asla tr tyala 4 byte memory milte 32 bit compiler vr aani compiler jr 64 bit asel tr ptr 8 byte asto
	int no1=21;//ith fkt no1 la ekdach memory milnar aani ref ha tyacha reference variable ahe tyala vegli memory milnar nahi te 2 ektrch ahe ts vrchya eg madhe no la aani pointer la sepreat memory milnar
	int &ref=no1;//ha reference cha syntax ahe jyala reference lavaycha ahe tyala (=) ya sign chya pud lihaych aani tyala reference name mhnje topn nav kay dyaych te (=) ya sign chya alikde lihaych aani tyala & lavaycha aata ith no1 ya varialble ref he na reference mhnun add zaly
       cout<< no<<"\n";//ith aapn no chi value print keliye 
       cout<< *p<<"\n";//ith aapn p jyala point krtoy tyachi value print keliye 
       cout<<p<<"\n"<<&no<<"\n";//ith aapn no cha address aani pointer p madhla address print kela ahe
       cout<<no1<<"\n";//ith aapn no1 mahnje ref madhli value print keli ahe
       cout<<ref<<"\n";//ith aapn ref mhnje no1 madhli value print keli ahe
       cout<<&no1<<"\n"<<&ref<<"\n";//aani ith tyancha address print kela ahe no1,ref yancha address same ahe mhnje he 2 ekch variable ahe
       no1++;//aata ith aapn no1 la ekane vadhval ahe mhnje ha fark ref la klel karn te 2 ekch aahet no1 ch topn nav ref as ahe 
       cout<<no1<<"\n"<<ref<<"\n";//aata ith ti vadhleli value print keli ahe
       cout<<"Reference variable creat krayla & operator lagto aani reference la vegli memory milt nahi jshi pointer la 4 byte vegli memory milte tsi reference ha symbol table madhil another name ya column madhe jato jevha kontyahi reference variable vr aapn operation krto tevha to badl orignal variable vr pn effect krto \n";
       int i=21;
      //int &ref;//he chalt nahi karn ith aadhi & operator ahe mg compiler mhnar ki ha reference ahe pn kunacha he klnyachya aadhich syntax band zala mhnun
      //ref=i;//-//-
       int a=22;
//     float &ref=i;//he pn nahi chalt karn ith reference type aani refer type he 2 sarkhech pahije 
	int j=11;
	int &x=j;//ith aapn ekapeksha jast reference lavu shkto 1 variable la mhnje orignal name j rahil aani x,y,z he tyache reference variable rahtil
	int &y=j;
	int &z=j;
	cout<<j<<"\n"<<x<<"\n"<<y<<"\n"<<z<<"\n";//ith aapn orignal aani reference variables print kele ahet
	
}
