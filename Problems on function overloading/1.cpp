#include<iostream>

using namespace std;

class Demo
{
	public:
		int i;
		int j;
	int Add(int ino1, int ino2)
	{
		return ino1+ino2;
	}
	int Add(int ino1, int ino2, int ino3)
	{
		return ino1+ino2+ino3;
	}
	int Add(float no1, float no2)
	{
		return no1+no2;
	}
	float Add(float no1, float no2, float no3)
	{
		return no1+no2+no3;
	}
};
int main()
{
	Demo obj;
	int iRet = 0;
	float fRet= 0.0;
	int i = 10, j = 20, k = 30;
	float x = 10.0, y = 20.0, z = 30.0;

	iRet = obj.Add(i,j);
	cout<<iRet<<"\n";
	iRet = obj.Add(i,j,k);
	cout<<iRet<<"\n";
	fRet = obj.Add(x,y);
	cout<<fRet<<"\n";
	fRet = obj.Add(x,y,z);
	cout<<fRet<<"\n";
	return 0;
}
//ith function overloading kel ahe aata 
