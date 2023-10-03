#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
		const int k;//he nahi chalnar bcz k la initilize kelel nahiye jr ith initilize kel tri te chalt nahi
		//aani constructor madhe pn initilize kele chalt nahi mag yala ekch option ahe constructor chya pud
		//initilize kra aapn khali kely ts aani tith aapn naormal charectrictes pn initilize kru shkto
	Demo():k(80),j(90)
	{
		this -> i = 10;
	//	this -> k = 80;//he as nahi chalt constant charectrictis la constructor chya pudch initilize krav
		//lagt
	}
};

int fun()
{
    const int z = 11;
    cout<<z<<endl;
    return z;
}

int main()
{
	Demo obj1;

	cout<<obj1.i<<"\n";
	cout<<obj1.k<<"\n";
	cout<<obj1.j<<"\n";
    cout<<sizeof(obj1)<<endl;
    int ans = fun();
    cout<<ans<<endl;
}
