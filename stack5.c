#include<stdio.h>
#include<conio.h>
#include<string.h>
#define max 20
char stack[max];
int top=-1;
char pop();
void push(char item);
int precedence(char symbol)
{
	int p;
	switch(symbol)
	{
		case'+':
			case'-':
				p=2;
				break;
				case'*':
				case'/':
					p=4;
					break;
				case'^':
					p=6;
					break;
					case'(':
						case')':
							case'#':
								p=1;
								break;
	}
	return p;
}
int isoperator(char symbol)
{
	switch(symbol)
	{
		case'+':
			case'-':
				case'*':
					case'/':
						case'^':
							case'(':
							case')':
								return 1;
								default:
									return 0;
	}
}
void convertip(char infix[],char postfix[])
{
	int i,symbol,j=0;
	stack[++top]='#';
	for(i=0;i<strlen(infix);i++)
	{
		symbol=infix[i];
		if(isoperator(symbol)==0)
		{
			postfix[j]=symbol;
			j++;
		}
		else
		{
			if(symbol=='(')
			
				push(symbol);
				else if(symbol==')')
				{
					while(stack[top]!='(')
					{
						postfix[j]=pop();
						j++;
					}
					pop();
				}
				else
				{
					if(precedence(symbol)>precedence(stack[top]))
					push(symbol);
					else
					{
						while(precedence(symbol)<=precedence(stack[top]))
						{
							postfix[j]=pop();
							j++;
						}
						push(symbol);
					}
				}
			
		}
}
while(stack[top]!='#')
{
	postfix[j]=pop();
	j++;
}
postfix[j]='\0';
}
int main()
{
	char infix[20],postfix[20];
	printf("Enter the infic notation:\n");
	gets(infix);
	convertip(infix,postfix);
	printf("the postfix notation is:\n");
	puts(postfix);
	getch();
}
void push(char item)
{
	top++;
	stack[top]=item;
}
char pop()
{
	char a;
	a=stack[top];
	top--;
	return a;
}

Output:

Enter the infix notation:
a + b * (c - d)
The postfix notation is:
ab+cd-*
