//WAP which accept number from user and return the count of
//even digits


#include<stdio.h>

int  CountTwo(int iNo)
{
	int iDigit=0;
	int iTemp=0;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			iTemp=iTemp+1;
		}
		iNo=iNo/10;
	}
	return iTemp;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter Number\n");
	scanf("%d",&iValue);
	iRet=CountTwo(iValue);

	printf("%d",iRet);
	return 0;
}