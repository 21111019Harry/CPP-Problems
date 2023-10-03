#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void checkpalindrome(int brr[], int length);
int main()
{
    int size = 0;
    int *arr = NULL;

    cout<< "Enter the size:-";
    cin>> size;

    arr = new int;

    for(int i = 0; i < size; i++)
    {
        cin>> arr[i];
    }

    checkpalindrome(arr,size);

    delete arr;

    return 0;
}
void checkpalindrome(int brr[], int length)
{
    int j = length-1;
    bool flag = true;

    for(int i = 0; i < length; i++)
    {
        if(i < j)
        {
            if(brr[i] != brr[j])
            {
                flag = false;
                break;
            }
            j--;
        }
    }
    if(flag == true)
    {
        cout<< "Palindrome:" <<endl;
    }
    else
    {
        cout<< "Not Palindrome:" <<endl;
    }
}
