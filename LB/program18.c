#include<stdio.h>
int Addition(int);
int main()
{
	int iNo=0,iRet=0;
	
	printf("Enter Number\n");
	scanf("%d",&iNo);
	
	iRet=Addition(iNo);
	
	printf("Addition is : %d",iRet);
	
	return 0;
}

int Addition(int iValue)		
{
	int iSum=0;
	int iCnt=0;
	if(iValue<0)// Updator
	{
		iValue=-iValue;
		
	}
	//		1			2				3
	for(iCnt=1;iCnt<=iValue;iCnt++)
	{
		iSum=iSum+iCnt;	//4
	}
	return iSum;
}