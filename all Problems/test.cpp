#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Hello
{
    public:
        int j;
        int k;
        int *arr;
        int size;

        Hello()
        {
            cout<< "Defalult Constructor:"<<endl;
            int i = 10;
            int j = 20;
            int k = 30;
            cout<< "Enter the size:-";
            cin>>size;
            arr = new int [size];
        }
        Hello(int x)
        {
            cout<< "Parameterized constructor:"<<endl;;
        }
        void accept();
        void display();
};
void Hello::accept()
{
    for(int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
}
void Hello::display()
{
    sort(arr,arr+size);
    for(int i = 0; i < size; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
}
int main()
{
    int i = 0;

    Hello obj1;
    obj1.accept();
    obj1.display();
}
