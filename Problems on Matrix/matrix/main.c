#include"header.h"//ith aapn direct bhaerchi header.h file import keli mhne aata tya file madhla sgla data ya file madhe yeil.

//ith preprocessor 4 kam krel 1 header file include krel.2 micro expansition krel NULL krta.3 comment remove krel.4 white space remove krel.

int main()
{
	int **arr = NULL;//atep 1 ek box create zala jyat tya ubhya patticha address ahe aani ti ubhi patti pointer
	//chi ahe mhnun double star
	int iRow = 0, iCol = 0, i = 0, j = 0, iRet = 0, iRet1 = 0;

	printf("Enter the Row no:-");
	scanf("%d",&iRow);

	printf("Enter the Col no:-");
	scanf("%d",&iCol);

	arr = (int**)malloc(iRow*sizeof(int*));//step 2 ith ek ubhi patti create zali pointer chi jyat ek ek aadwya array chya patticha address ahe
	for(i=0;i<iRow;i++)
	{
		arr[i] = (int*)malloc(iCol*sizeof(int));//step 3 ith ek ek aadvi patti heap vr allocate zali
	}

	printf("Enter the values:\n");
	for(i=0;i<iRow;i++)
	{
		for(j=0;j<iCol;j++)
		{
			scanf("%d",&arr[i][j]);//step 4 ith ek ek value initilize keli
		}
		printf("\n");
	}

	iRet = Summatrix(arr,iRow,iCol);//ith Summatrix funtion la call ahe aani he function helper.c ya file madhe ahe.
	printf("Summation of elements is:-%d\n",iRet);

	iRet1 = Max(arr,iRow,iCol);

	printf("Maximum element in Matrix is:-%d\n",iRet1);

	for(i=0;i<iRow;i++)
	{
		free(arr[i]);//ith step 3 ch deallocation hot
	}

	free(arr);//ith step 2 ch deallocation hot
	return 0;
}

//1.39.52 time
//ya program la run kraychi cmd ahe :-
//gcc helper.c main.c -o myexe enter button press
//./myexe enter button press
