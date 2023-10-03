#include <iostream>

using namespace std;

//tr ith aapn nehmiprmane 2 gosti vichayaychya kay lagnar ahe aani kay kraychy tr 1st mhnje characteristic lagnar ahet aani 2nd mhnje bhehaviour lagnar ahe mg aapn je c madhe array che program ghetle tyat aapn je main madhe array,size ase 2,3 value ghet hoto tya aata fkt ikde class chya charactristic hotil bcz ya gosti sglya function la comman lagtil mhnun aapn tya class madhe private or public theu aani c++ madhe function chya local variable he tyach function madhe 
//declear krarun use krave tyana class madhe lihu nye class madhe fkt purn program la lagnare global variable
//or pointer lagt astil tr class madhe class che chararectrictes mhnun lihave. 
//aata ith rule ahet ki asha method or function jya baher dyavchya aahet tya public pahijet.
//aani asha charectrictes ki je baher disle tr koni badlel aani te bdln aaplya class la affect hoil te private pahije
//aata ith aapn kahi charectrictes private kelya aahet tr aaplyala vatel ki tyana private krnyapeksha constant kru 
//pn constant cha ek drawback ahe ki jr te aapn constant kel tr te aaplyala pn change nahi krta yenar pn aaplyala as nako hot mhnun te kadhihi private kraych. 
//question:-
//design 1 class which performs all basic operations on array such as 
//memory allocation ,memory deallocation,copy the contain into the another memory,accept the data,and store it into the array,display the containts of array.
//we have to design this class in such a way we can use it to salove the further problem statement for the other problem statements this class is considered as root class.


class Array   
{
	public:
		int *Arr;
		int size;
	public:
		//ith cpp madhe function lihinyachi paddht ashi ahe ki aadhe return value mg class ch nav mg scop
		//resolulation mg function cha nav mg bracket madhe parameters.pn he constructor ahe mhnun ith 
		//return value yenar nahi.pn he class madhlya function la nahi lihaych class chya baherchya function
		//la lihaych mhnje aapn js linked list la lihil hot ts.
		Array(int value = 10)//he parametrized constructor with default value ahe. 
		{
	 		cout<<"Inside Parametrized Constructor:\n";
			size = value;
		//	Arr = (int *)malloc(sizeof(int));//cpp madhe aapn c sarkh memory allocation kru shkto.
			Arr = new int [size];
			cout<<size<<"\n";
			cout<<sizeof(Arr)<<"\n";
			cout<<sizeof(size)<<"\n";
		}
		Array(Array &ref)//ha copy constructor ahe aani ha deep copy krtoy. mhnje navin memory gheun junya value tyat taktoy
		{
			cout<<"Inside copy Constructor:\n";
			//aata ith aapn aalela reference mhnje ref.size he navin reference madhe taktoy mhnje 
			//this->size yachyat mhnje aapn navin chya size madhe junyachi size copy keli.
			//same this->Arr khalhchya statement madhe pn honar ahe. mhnje vrti aapn constructor madhe 
			//new kelela array tyachyasarkha dynamically ajun ek array create kela.mg tyachyakhali 
			//for loop ne tyala initilize krtoy.
			this -> size = ref.size;
			this -> Arr = new int [this -> size];

			for(int i = 0; i<size;i++)
			{
				this -> Arr[i] = ref.Arr[i];//ha for loop Arr mdhla data copy krtoy ref madhe.
			}
		}
		~Array()
		{
			cout<<"Inside Destructor:\n";
			delete []Arr;//aata ith jr bracket aadhi dil tr fkt array chya 1st elementchich memory jail
			//mhnun aadhi bracket mg nantr araych nav dyav.
		}
		inline void Accept();
		inline void Display();
};
//aata ith ya function chya bracket madhe kahich dist nahiye but yat int *Arr,int size aalele ahe bcz he cpp ahe 
//aani class chya chareictristic jsachya tsha function madhe yetat.same Display function madhe pn ahe.
//void Array::Accept(const Array *this)asa ha internally call jato yat Accept(910)as yet 910 ha obj1 cha addr ahe.
void Array::Accept()//he function user kdun value accept krty
{
	for(int i = 0;i<size;i++)
	{
		cout<<"Enter the Element:-";
		cin>>Arr[i];
	}
}
//void Array::Display(const Array *this) as he function internally jat
void Array::Display()//he function tya user kdun ghetlelya value display kraysathi ahe.
{
	cout<<"Elements are:\n";
	for(int i = 0;i<size;i++)
	{
		cout<<Arr[i]<<"\n";
	}
}
//ha class vrchya class paun inherit zala ahe
class ArrSearch:public Array
{
	//yaat Array class che sgle charectristics aani function inherit zalet mhnje ya class la te diret bhetil.
	public:
		//ha aapn parametrized with default vale constructor ahe vrchya class madhe tyach parameter value
		//hot aata ith no ahe mhnun : deun Array(no) as lihil ahe baki sgl same.mhnje ith {} sgl same ahe.
		ArrSearch (int no = 10):Array(no)
		{}
		int Frequency(int);
		int SearchFirst(int);
};
int ArrSearch::Frequency(int value)
{
	int iCnt = 0;
	for(int i=0;i<size;i++)
	{
		if(Arr[i]==value)
		{
			iCnt++;
		}
	}
	return iCnt;
}
int ArrSearch::SearchFirst(int value)
{
	int i = 0;
	for(i=0;i<size;i++)
	{
		if(Arr[i]==value)
		{
			break;
		}
	}
	if(Arr[i]==value)
	{
		return -1;
	}
	else
	{
		return i;
	}
}
int main()
{
	int ivalue = 0;
	cout<<"Inside main:\n";
	Array obj1;//ith aapn object banvla ahe yat jr tumhi value dyal tr ti value accept hoil aani jr nahi deli
	//tr aapn paramatrize constructor with default value dila ahe tr to ti default value accept krel.
	//mhnje ji dyal ti circuler bracket dya nahitr default dileli value ghil.
	cout<<sizeof(obj1)<<"\n";//ith object chi size 16 ahe.
	obj1.Accept();//Accept(&obj1) mhnjech Accept(910)asa internally call jato function la.
	//910 ha obj1 cha addr ahe aapn tyachi dig vahit kadhleli ahe.
	obj1.Display();//Display(&obj1) mhnjech Display(910)
	cout<<"Enter the size of copy array:-";
	cin>>ivalue;
	Array obj2(ivalue);//ith aapn copy constructor la call kelay aani tyala obj1 ha object pass krtoy.
	//mhnje obj2 la obj1 sarkh banvaychy. aani ith 2 destructor call hotil bcz obj1 cha ekda ani obj2 cha ekda.
	//aani kuthla phile he aaplyala sangta yet nahi bcz ha compiler cha vishy asto.
	obj2.Accept();//obj2.Accept(&obj2) mhnjech obj2.Accept(920)
	obj2.Display();//ith aapn copy kelelya array madhle element display hotil bcz obj2 ha copy krtoy obj1 la.
	Array obj3(obj2);//aata ith copy constructor la call ahe
	obj3.Display();//obj3.Display(&obj2) mhnjech obj3.Display(930)
	cout<<obj1.Arr<<"\n";
	cout<<obj2.Arr<<"\n";
	//////////////#################////////////////
	ArrSearch sobj1;
	sobj1.Accept();
	sobj1.Display();
	ArrSearch sobj2(4);
	sobj2.Accept();
	sobj2.Display();
	int iRet = 0;
	iRet = sobj2.Frequency(11);
	cout<<"Frequency is "<<iRet<<"\n";
	iRet = sobj2.SearchFirst(11);
	cout<<"First occurence is at "<<iRet<<"\n";
	return 0;
}

//ith aadhi obj1 vr sgle operation hotil mhnje accept display mg same operation obj2 vr hotil.
//fkt obj1 madhe aapn Array obj1(); as dil ahe mhnje aapn constructor la sagtoy ki tu ti size chi value use kr 
//aani obj2 madhe aapn Array obj2(ivalue); as dily mhnje aapn tyala aapli value sgtoy.
//mg Array obj3(obj2); asa call ahe ha call mhnje copy constructor la call ahe as call aalyavr compiler check krto
//ki jo navin object ahe mhnje obj3 aani to jr parameter mhnun jr tyach class cha object det asel tr to class madhe copy constructor find krel mhnje obj3 aani obj2 he Array navachya class che object ahet.
//aata ith jr aapn this->size mhtl tr obj3 work hoil ani jr ref.size mhthl tr obj2 work hoil.
//sglyat sheti Inside Distructor he 3 vela print hoil bcz aapn 3 object create kele mhnun.
//ith fkt ek confisuon ahe ki destructor ha top to bottam jato ki bottam to top jato bcz he laptop vr varry hot.
