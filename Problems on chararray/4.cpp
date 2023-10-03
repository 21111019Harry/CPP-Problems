#include<iostream>


using namespace std;

int length(char *brr);
int main()
{
/*    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    cout<<length(str)<<endl;*/    // using string

    char arr[20];

    cout<< "Enter the string:-";
    cin.getline(arr,sizeof(arr));

    cout<<length(arr)<<endl;      // using character array 

}
int length(char *str1)
{
    int iCnt = 0;

    for(int i = 0; str1[i] != '\0'; i++)
    {
        iCnt++;
    }
    return iCnt;
}
