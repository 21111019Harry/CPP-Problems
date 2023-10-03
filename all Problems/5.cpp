#include<iostream>

using namespace std;

//bubblesort :-


class Array
{
	public:
		int *Arr;
		int size;
	public:
		Array(int value = 10)
		{
			cout<<"Inside Parametrized constructor with default value:\n";
			size = value;
			Arr = new int [size];
		}
		Array(Array &ref)
		{
			cout<<"Inside copy constructure:\n";
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
	int i = 0;
	for(i=0;i<size;i++)
	{
		cout<<"Enter the Element:-";
		cin>>Arr[i];
	}
}
void Array::Display()
{
	int i = 0;
	cout<<"Elements are:-\n";
	for(i=0;i<size;i++)
	{
		cout<<Arr[i]<<"\n";
	}
}
class sorting:public Array
{
	public:
		sorting(int x = 10):Array(x)
		{}
		void bubblesort();
};
void sorting::bubblesort()
{
	bool sort = false;
	for(int pass=1;pass<size;pass++)
	{
		sort = false;//ith aapn flage false kela.mhnje swapping nahi zal
		for(int i=0;i<size-pass;i++)
		{
			if(Arr[i]>Arr[i+1])
			{
				int Temp = Arr[i];
				Arr[i] = Arr[i+1];
				Arr[i+1] = Temp;
				sort = true;//ith aapn flage true kela.mhnje swaping zal
			}
		}
		//ith aapn if ghetly bcz aapn ek pass extra firtoy. mhnje jr array sort zala tri ha shetch itteration firytoy ki je aapn ya if mule avoid kru.
		if(sort==false)
		{
			break;
		}
	}
}
int main()
{
	Array obj1;
	obj1.Accept();
	obj1.Display();
	///////////##############////////////
	sorting sobj1(6);
	sobj1.Accept();
	sobj1.Display();
	sobj1.bubblesort();
	sobj1.Display();
	return 0;
}
//bubble sort best and worst case time complexsity is o(n^2)
//ani jr ti if chi condi laun loop lihila tr tyachi best case o(n) yete.
//aani worst case o(n^2).
