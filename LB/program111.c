#include<stdio.h>
#include<stdbool.h>
bool CheckCapital(char c)
{
	if((c>=65) && (c<=96))
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	char ch='\0';
	bool bRet=false;
	printf("Enter Character\n");
	scanf("%c",&ch);
	bRet=CheckCapital(ch);
	if(bRet==true)
	{
		printf("Capital ");
	}
	else
	{
		printf("Not Capital");
	}

	return 0;
}