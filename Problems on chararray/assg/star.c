#include<stdio.h>


int main()
{
	int arr[5]={10,20,30,40,50};
	int *p = arr;

	printf("%d\n%d\n",arr,&arr);
	printf("%d\n%d\n",&arr[0],arr[0]);
	printf("%d\n%d\n",&arr[3],arr+3);
	printf("%d\n%d\n",arr+1,&arr+1);
	printf("%d\n%d\n",arr[3],arr+2);
	printf("%d\n%d\n",3[arr],&arr[3]);

	printf("%d\n%d\n",p,&p);
	printf("%d\n%d\n",*p,*(p+2));
	printf("%d\n%d\n",p+1,arr+1);
	printf("%d\n%d\n",*p+p,*p+1);
	printf("%d\n%d\n",p+1,sizeof(p));
}
