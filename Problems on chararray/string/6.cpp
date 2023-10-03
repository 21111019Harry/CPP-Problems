#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void space(string &str);
int main()
{
    string str;

    cout<< "Enter the string:-";
    getline(cin,str);

    space(str);
    return 0;
}
void space(string &str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
        {
            str[i] = '@';
            str.insert(i+1,"40");
            i = i+2;
        }
        else
        {
            i++;
        }
    }
    cout<< str <<endl;  

/*    string temp = "";

    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(str[i]);
        }
    }
    cout<< temp <<endl;  */
}
