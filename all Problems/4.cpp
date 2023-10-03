#include<iostream>

using namespace std;

//aata aapn sgle serching and sorting che sgle algo ghenar ahot.
//search mhnje shodhn and sort mhnje increasing or decreasing order madhe lihin.
//////#######searching madhe :-
//1 linear search,2 binary search,3 linear search bi (bi mhnje bidirectional mhnje pudun magun)
//dogh side ne search krto yaat linear search la unsorted data asla tri chalto. pn binary search data sorted asla
//trch work krto.but aapn madhchya vim 2.cpp madhe Accept function ghetl tyat user ksa pn data taku shkto mhnje 
//linear or non linear tr aapn tyasathi ek helper function lihaych ki je function check krel ki aapla data sorted
//ahe ki nahi jr data sorted asla tr binary search aani sorted nasel tr linear search use kra.
//linear search madhe aapn array la aadhipaun shodht jato 0th index pasun aapn je vim 2.cpp madhe search function
//ghetl ts pn binary search madhe aapn array cha mid point kadhto mg aaplyala jo i/p check kraycha ahe te jr tya mid point peksha small asl tr aapn arraychya left la shodhto aani te i/p jr mid point peksha moth asl tr aapn arraychyaright side la shodhto. mhnje he divide and conquer techniq chya under yet.
///////#######sorting madhe :-
//yat barech ahe pn aapn fkt bubble sort, inserction sort, seleaction sort, merge sort ghenar ahot.
//aata ith aapn je kahi searching aani sorting che function lihinar ahot te sgle ekach nevin class madhe lihanar
//ahot aani to class aaplya aadhichya Array navachya class la inherit krel. mhnun mi aadhi class Array lihila ahe.
//aata ha program fkt searching krta lihu aani next program ha sorting krta lihu mg ith aapn 4 function lihinar ahotlinear search,binary search,linear search bi,helper function. yatle 3 function public theu aani ek private aani 
//yanchi return value bool theu.
//#####Question:-
//design 1 object oriented program which performs below activities 
//1 accept number and search that number in a linear fasion.(array is unsorted)
//2 accept number and search that number by traversing the array from both the direction.(array is unsorted)
//3 accept number and search that number in the array using binary search tecnique(array is sorted).

class Array
{
	public:
		int *Arr;
		int size;
	public:
		Array(int value = 10)
		{
			cout<<"Inside Parametrized constructore:\n";
			size = value;
			Arr = new int [size];

		}
		Array(Array &ref)
		{
			cout<<"Inside Copy constructore:\n";
			this -> size = ref.size;
			this -> Arr = new int [this -> size];
			for(int i=0;i<size;i++)
			{
				this -> Arr[i] = ref.Arr[i];
			}
		}
		~Array()
		{
			cout<<"Inside Destructor:\n";
			delete []Arr;
		}
		inline void Accept();
		inline void Display();
};
void Array::Accept()
{
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the element:-";
		cin>>Arr[i];
	}
}
void Array::Display()
{
	cout<<"Element are:-\n";
	for(int i=0;i<size;i++)
	{
		cout<<Arr[i]<<"\n";
	}
}
class Search:public Array
{
	public:
		Search(int x = 10):Array(x)
		{}
		bool Linearsearch(int);
		bool LinearsearchBi(int);
		bool Binarysearch(int);
	private:
		bool Checksorted(int);//he aapl helper function ahe.
};
bool Search::Linearsearch(int value)
{
	int i = 0;
	for(int i=0;i<size;i++)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}
	if(i==size)
	{
		return false;
	}
	else
	{
		return true;
	}
}
bool Search::LinearsearchBi(int value)
{
	int iStart = 0, iEnd = size-1;
	while(iStart<=iEnd)
	{
		if((Arr[iStart==value]) || (Arr[iEnd==value]))
		{
			break;
		}
		iStart++;
		iEnd--;
	}
	if(iStart<=iEnd)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//he function aapn i/p la check kraysathi ghetly ki array sorted ahe ki unsorted ahe
//jr array sorted asla tr direct Binarysearch function la call jail aani jr array jr unsorted asla tr aadhi tya
//array la ya function madhe sorted krun Binarysearch function kde pathvl jail.
bool Search::Checksorted(int value)
{
	int i = 0;
	for(i=0;i<size-1;i++)
	{
		if(Arr[i]>Arr[i+1])
		{
			break;
		}
	}
	if(i==size-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool Search::Binarysearch(int value)
{
	int iStart = 0, iEnd = size-1, mid = 0;
	bool bRet = false;
	bRet = Checksorted(value);
	if(bRet==false)
	{
		return Linearsearch(value);//ha to call ahe ki jr i/p jr sorted nsel tr aapn tyala aadhi sorted kru.
	}
	else
	{
		while(iStart<=iEnd)
		{
			mid = (iStart+iEnd)/2;

			if(Arr[mid]==value)
			{
				break;
			}
			if(value<Arr[mid])
			{
				iEnd = mid-1;
			}
			else if(value>Arr[mid])
			{
				iStart = mid+1;
			}
		}
		if(Arr[mid]==value)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
int main()
{
	Array obj1;
	cout<<sizeof(obj1)<<"\n";
	obj1.Accept();
	obj1.Display();
	Array obj2(4);
	obj2.Accept();
	obj2.Display();
	/////////#############/////////
	Search sobj(3);
	sobj.Accept();
	sobj.Display();
	int no = 0;
	cout<<"Enter the value to Search:-";
	cin>>no;
	bool bRet = false;
	//aata ith Linearsearch() la aapn call kelay nantr thumhi te kadhun LinearsearchBi() la pn call kru shkto
	//aani ajun Binarysearch() la pn call kru shkto bcz aapn te ekch function la call kely 
	bRet = sobj.Linearsearch(no);
	if(bRet==true)
	{
		cout<<"Element Occurces:\n";
	}
	else
	{
		cout<<"Not: ";
	}
//	bRet = sobj.Checksorted();//error bcz he private ahe
	return 0;
}
