#include<stdio.h>

int Count(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='E')||(*str=='I')||(*str=='O')||(*str=='U'))
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char Arr[30];
	int iRet=0;

	printf("Enter string\n");
	scanf("%[^'\n']s",Arr);
	iRet=Count(Arr);
	printf("Number of vowels are:%d",iRet);
	return 0;
}
