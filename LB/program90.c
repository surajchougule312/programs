#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
//#define TRUE
//#define FALSE
bool CheckNumber(int Arr[],int iSize)
{
	int i=0;
	bool bAns=false;
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]==11)
		{
			bAns=true;
			break;
		}
	}
	return bAns;
}
int main()
{
	int *ptr=NULL;
	int iLength=0,i=0;
	int iRet=0;
	bool bRet=false;
	printf("Enter numbers of elements\n");
	scanf("%d",&iLength);
	ptr=(int*)malloc(sizeof(int)*iLength);
	printf("Enter elements\n");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Entered data is:");
	{
		for(i=0;i<iLength;i++)
		{
			printf("%d\t",ptr[i]);
		}
		printf("\n\n");
	}
	bRet=CheckNumber(ptr,iLength);
	if(bRet==true)
	{
		printf("Number is there");
	}
	else
	{
		printf("Number is not there");
	}
	free(ptr);
	return 0;
}