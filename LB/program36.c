//no from user reverse that number


#include<stdio.h>

int Reverse(int);

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);

	iRet=Reverse(iValue);
	
	printf("Revese number is %d",iRet);
	return 0;
}

int Reverse(int iNo)
{
	if(iNo<0)
	{
		iNo=-iNo;
	}
	int iDigit=0;
	int iRev=0;
	while(iNo>0)
	{
		iDigit=iNo%10;
		iRev=(iRev*10)+iDigit;
		iNo=iNo/10;
	}
	return iRev;

}