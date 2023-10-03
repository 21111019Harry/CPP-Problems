#include<iostream>
#include<bits/stdc++.h>

//using + operator subtract 2 integer value.

using namespace std;

class Demo
{
    public:
        int a;
        int b;

    public:
        int add()
        {
            return a+b;
        }

        void operator+ (Demo &obj)
        {
            int value1 = this -> a;
            int value2 = obj.a;
            cout<< "Output :-" << value2 - value1<<endl;
        }

        void operator() ()
        {
            cout<< "Circular bracket overload:-" <<endl;
        }

};

int main()
{
    Demo obj1;
    Demo obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2;  // ha operator+ function cha call ahe 

    obj1();
}
