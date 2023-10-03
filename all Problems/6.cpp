#include<iostream>

using namespace std;

//selection sort :-selection sort is similer as bubble sort.
//time complexsity of this sort also O(N^2)
//in selection sort we selects smallest element and swap that element with our selected elements.


class Array
{
	public:
		int *Arr;
		int size;
	public:
		Array(int value = 10)
		{
			cout<<"Inside parametrized constructor:\n";
			size = value;
			Arr = new int [size];

		}
		Array(Array &ref)
		{
			cout<<"Inside copy constructor:-\n";
			this -> size = ref.size;
			this -> Arr = new int [this -> size];
			for(int i=0;i<size;i++)
			{
				this -> Arr[i] = ref.Arr[i];
			}
		}
		~Array()
		{
			cout<<"Inside distructor:-\n";
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
	cout<<"Elements Are:-\n";
	for(i=0;i<size;i++)
	{
		cout<<Arr[i]<<"\n";
	}
}
class sorting:public Array
{
	public:
		sorting(int x=10):Array(x)
		{}
		void selectionsort();
};
void sorting::selectionsort()
{
	for(int i=0;i<size-1;i++)
	{
		int imin = i;
		for(int j=i+1;j<size;j++)
		{
			if(Arr[j]<Arr[imin])
			{
				imin = j;
			}
		}
		if(i!=imin)
		{
			int Temp = Arr[i];
			Arr[i] = Arr[imin];
			Arr[imin] = Temp;
		}
	}
}
int main()
{
	Array obj1;
	obj1.Accept();
	obj1.Display();
	Array obj2(3);
	obj2.Accept();
	obj2.Display();
	////////////############//////////
	sorting sobj1(6);
	sobj1.Accept();
	sobj1.selectionsort();
	sobj1.Display();
}	
