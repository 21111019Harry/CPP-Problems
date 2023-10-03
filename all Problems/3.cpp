#include<iostream>


using namespace std;

//design 1 c++ application which performs below activities by inhereting the array class.
//1 count even element, accept 1 no. and count the frequency of that no., accept 1 no. and return its 1st occurrence
//accept 1 no. and return its last occurrenec.
//ith ha class vim 2.cpp madhlya Array navachya class la inherit krtoy. mhnjech aatcha class Array la use krun kahi 
//operation krel. vim 2.cpp madhla Array ha parent class ahe ani ithla ArrSearch ha class tyacha child class ahe.

class ArrSearch:public Array//he single level inheritence ahe
{
	public:
		//ya class madhe varchya class chya charectristics aani behaviour sgle jasechya tashe aalet.
	//	int *Arr;//he 2 charectritics ith inherit houn aalelya ahet mhnun tyana prt nahi lihaych.
	//	int size;//
		int frequency(int);//he function aapn lihil bcz aaplyala lagnar ahe he inherit houn nahi aaly.
};
int ArrSearch::frequency(int)
{
	return 0;
}
int main()
{
	ArrSearch obj1;
}
//pn ha jo program ahe to seprate yenar nahi bcz ha inherit houn aala ahe class Array pasun tr ha tya Array class 
//chya main chya vrti yeil mhnun aapn tha navin class magchya eg madhe main chya vrti lihila ahe vim 2.cpp madhe.
//aani ith fkt special lihla ahe bcz aaplyala smjava mhnun.
