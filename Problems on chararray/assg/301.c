#include<stdio.h>
#include<stdbool.h>

void Copy(char *src, char *dest);
int main()
{
	char arr[30]={'\0'};
	char brr[30]={'\0'};

	printf("Enter the String:-");
	scanf("%[^'\n']s",arr);

	Copy(arr,brr);
//	Copy(arr+strlen(arr),brr);

	printf("%s",brr);

	return 0;
}
//aata ith 1 problem ahe ki ith jr brr mhnje main ne pathvlela 2nd array tr aaplyala ith arr madhun brr madhe 1,1 char copy kryacha ahe pn jr 2nd array brr jr arr peksha kami asla tr mhnje eg.arr 20char asla mhnje tyat aapn 20 char thevu shkto  aani jr brr 10 char cha asla tr brr full bhrel pn baki char urtil aani mg seg. fault error yeil aani ith aaplyala yachi size pn count krta yenar nahi karn aaplyakde aray che pointer ahe tr pointer vrun aaplyala array chi size nahi klnar tr ha problem ksa solve krnar tr Copy fun  main la sangaych ki tu mla 1 ch array pathv mhnje arr 2nd array mi Copy fun madhech create krto dynamically arr vrun mhnje arr chi kiti size ahe tevdich size mi tya 2 nd array chi gheil.
void Copy(char *src, char *dest)
{
	while(*src!='\0')
	{
		*dest = *src;
		*src++;//yaha sirf src++; bhi chlega
		*dest++;//or dest++;
	}
	*dest='\0';
}
