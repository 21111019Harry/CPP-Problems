#include<iostream>

using namespace std;


class Array
{
	public:
		int *Arr;
		int size;
	public:
		Array(int value = 10)
		{
			cout<<"Inside constructors:\n";
			size = value;
			Arr = new int [size];
		}
		Array(Array &ref)
		{
			cout<<"Inside copy constructor:\n";
			this -> size = ref.size;
			this -> Arr = new int [this -> size];
			for(int i=0;i<size;i++)
			{
				this -> Arr[i] = ref.Arr[i];
			}
		}
		~Array()
		{
			cout<<"Inside distructor:\n";
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
		sorting(int x = 10):Array(x)//he default value parent class chyi aani child class chyi same pahijet.
		{}
		void insertionsort();
};
void sorting::insertionsort()
{
	int i = 0, j = 0, key = 0;
	for(i=1;i<size;i++)
	{
		key = Arr[i];//selected element
		j = i-1;
		while((j>=0) && (Arr[j]>key))//itterate every elementArr[j]>Arr[key]
		{
			Arr[j+1] = Arr[j];
			j--;
		}
		Arr[j+1] = key;
	}
}
int main()
{
	Array obj1;
	obj1.Accept();
	obj1.Display();
	///////////################////////////
	Array obj2(6);
	obj2.Accept();
	obj2.Display();
	///////////################/////////////
	Array obj3(obj2);//copy constructor call
	obj3.Accept();
	obj3.Display();
	//////////#################/////////////
	sorting sobj(6);
	sobj.Accept();
	sobj.insertionsort();
	sobj.Display();
}
