#include<stdio.h>
#include<process.h>
#define MAX 5
int stack[MAX],top=-1;
int push();
int pop();
int traverse();
int main()
{
	int choice;
	do
	{
		printf("\n\n\n1.PUSH\n2.POP\n3.TRAVERSE\n4.EXIT\n\n\n");
		printf("\nENTER UR CHOICE: ");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		case 3:
			traverse();
			break;
		case 4:
			exit(0);
			break;	
		default:
			printf("\nWRONG CHOICE\n");
	}
	}while(choice!=4);
	return 0;
}
int push()
{
	int item;
	if(top==(MAX-1))
	printf("\nSTACK OVERFLOW!!!!!!!!!!!!\n\n");
	else
	{
		printf("\nENTER ELEMENT U WANT TO PUSH: ");
		scanf("%d",&item);
		top++;
		stack[top]=item;
	}
}
int pop()
{
	if(top==-1)
	printf("\nSTACK UNDERFLOW!!!!!!!!!!!!\n\n");
	else
	{
		printf("\nTHE POPPED ELEMENT IS %d\n\n",stack[top]);
		top--;
	}
}
int traverse()
{
	int i;
	if(stack[top]==-1)
	printf("\nSTACK EMPTY\n\n");
	else
	{
	for(i=top;i>=0;i--)
	printf("||_____%d_____||\n",stack[i]);
	}
}

