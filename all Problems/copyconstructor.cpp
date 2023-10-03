#include<iostream>

using namespace std;

class Demo
{
	public:
		int i, j;
        int *arr = NULL;
	Demo()//default constructor
	{
		i = 10;
		j = 20;
        arr = new int[5];
        for(int i = 0; i < 5; i++)
        {
            cin>>arr[i];
        }
        cout<<endl;
	}
/*	Demo(int x)//parametrized constructor
	{
		i = x;
		j = x;
	}
	Demo(int x, int y)//parametrized constructor
	{
		i = x;
		j = y;
	}*/
    void print()
    {
        cout<< i <<" "<< j <<endl;
    }
/*	Demo(Demo &ref)//copy constructor (shallow copy)
	{
        cout<< "Copy constructor called:" <<endl;
		this -> i = ref.i;
		this -> j = ref.j;
	}*/
};
int main()
{
//	Demo obj1;//ith aaplyala vaat ki default constructor la call krtoy pn as nahiye ith aapn object banvtoy 
	//constructor ha implicit call hoto mhnje tyala call kraychi garj naste
	Demo obj2;// -//-
    obj2.print();
    Demo obj3(obj2); // call copy constructor
//    obj2.print();    //here we print object obj2 means orignal object
    obj3.print();      // here we print copy object which is obj2 obj2 copy in obj3 
    obj2.i = 100;
    obj2.print();
    obj3.print();
//	Demo obj3(11);//-//-
//	Demo obj4(11,21);// -//-
//	Demo obj5(obj4);//-//-

	return 0;
}
//copy constructor default call hota hai default constructor ke jaise means compiler 2 constuctor by default deta hai 1.default constructor 2.copy constructor and ye jo copy constructor milta hai wo shallow copy krta hai.
//copy constructor explicit call hoto but jr aaplyala copy constructor create kraycha asel tr aapn to creat kru shkto js aapn Demo(Demo &ref) asa copy constructor create kela ahe but jr aapn to nahi lihila tri chalt bcz to inbuilt asto to inbult shallow copy asto.aani jo aapn lihla ahe to pn shallowch
//ahe jr tumhala deep copy constructor lihaycha asel tr to aaplyala manually lihawa lagto.
