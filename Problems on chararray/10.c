#include<stdio.h>
#include<stdbool.h>



//accept the string from user and copy the contents of that string into other string.in alternative format.
//i/p abcde o/p ace ,i/p abcd o/p ac, i/p ab o/p a, i/p a o/p a.

void Alternative(const char *src, char *dest);
int main()
{
	char arr[20];
	char brr[20];

	printf("Enter the String:");
	scanf("%[^'\n']s",arr);

	Alternative(arr,brr);

	printf("%s",brr);

	return 0;
}
void Alternative(const char *src, char *dest)//yahape const he bcz src change nahi hoga but dest change hoga.
{
	if((src==NULL) || (dest==NULL))
	{
		return ;
	}
	while((*src!='\0'))//or use do while loop while chya jagevr do aani direct curly bracket aani tyachya khali condi check kra.
	{
		*dest = *src;
		if(*(src+1)=='\0')
		{
			dest++;
			break;
		}
		src = src+2;
		dest++;
	}
	*dest='\0';
}
