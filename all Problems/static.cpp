   #include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
		static int k;    // static local
	Demo()
	{
		i = 0;
		j = 0;
		k = 33;//ith aapn k la initilize kru shkto but as kru naye yala class smaplyavr class chya khalich
		//initilize krav
	}	
	void fun()
	{
        static int n = 232;    // static local
		cout<<this -> i<<"\n";//ith non static function madhe sgle charectrictis access kelele chaltat
		cout<<this -> j<<"\n";// -//-
		cout<<this -> k<<"\n";// -//- ith k chi value 0 ahe bcz tyala aapn class chya bhaher initilize kely
        cout<<n<<endl;
	}
	static void gun()
	{
		//he nahi chalnar bcz gun he static function ahe i,j he non static charectritics ahe static function
		//he fkt static charectrictis lach acces kru shktat.
	//	cout<<this -> i<<"\n";// -//-
	//	cout<<this -> j<<"\n";// -//-
	//	cout<<this ->k<<"\n";//ith aapn fkt k la access kru shkto pn ith this keyword chalt nahi
		cout<<k<<"\n";
	}
};
int Demo::k = 10;

void xyz()  //he naked function ahe mhnje class chya baherch function aani member function pn ast te mhnje class chya aatl
{
    int x = 20;
    static int p = 40;  // static
    cout<< x <<" "<< p <<endl;
}

int main()
{
	cout<<Demo::k<<"\n";//ith ha k hi value print krel mhnje 10
	cout<<sizeof(Demo)<<"\n";//demo chi size 8byte ahe i 4byte,j 4byte k la nahi bcz k ha static ahe tyala 
	//static segment madhe memory milel
	Demo::gun();//ith aapn static function la class chya navanich call krav lagt
//	Demo::fun();//ith aapn normal function la class chya navani call kru shakt nahi
	Demo obj1;//ith object create kela
	Demo obj2;//ith 2 object create kela
	obj1.fun();//yala object. as call kel bcz he non static function ahe

//	Demo::fun();//he error deil bcz he non static function ahe aani yala aapn class chya navane call krtoy
//	obj1.gun();//he chalt but as kru naye bcz he static function ahe aani aapn yala object chya navane call
	//krtoy
	obj1.i++;
	cout<<obj1.i<<"\n";
	cout<<obj2.i<<"\n";

	obj1.k++;
	cout<<obj1.k<<"KK"<<"\n";  // ith aapn static k ha object ch nav gheun pn access kru shkto but as kru naye
	cout<<obj2.k<<"\n";
	cout<<Demo::k<<"\n";
    xyz();
}
//aata jr ha class koni inherit kela mhnje yaachya child class la ya class madhl fkt non static contain milel mhnje i,j charectrictes miltil k nahi bcz k ha static ahe fun function milel gun nahi bcz gun he pn static function ahe.
