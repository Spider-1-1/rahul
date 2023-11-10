#include<stdio.h>

int linersearch(char str[],char key,int index)
{
	if(str[index]=='\0')
	{
		return -1;
	}
	if(str[index]==key)
	{
		return index;
	}
	linearsearch(str,key,index+1);
}
int main()
{
	char str[10];
	char key;
	printf("enter the string:");
	scanf("%s",str);
	
	printf("Enter the charrcter to search:");
	scanf("%c",&key);
	
	int result = linerasearch(str,key,0);
	if(result!=-1){
		printf("character %c found at index %d",key,result);
	}
	else
	{
		printf("character %c not found in the string",key);
	}
}
