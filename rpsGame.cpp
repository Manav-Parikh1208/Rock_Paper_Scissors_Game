#include<stdio.h>
#include<process.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>

// game of rock paper scissors

int ch,rm,p=0,c=0;

void heading()
{
	printf("\n\n**********This Is A Game Of Rock Paper Scissors**********");
}

void choice()
{
	printf("\n\n\n***Choices***\n0. Exit\n1. Rock\n2. Paper\n3. Scissors\n\nEnter Your Choice: ");
	scanf("%d",&ch);
}

void random()
{
	time_t t1;
	srand(time(&t1));
	rm=rand()%3+1;
	printf("\n\nThe Computer Chose %d Choice\n\n",rm);
}

void calculation(int ch,int rm)
{
	if(ch==1 && rm==3)
	{
		p++;
		printf("The Player Won");
	}
	else if(ch==2 && rm==1)
	{
		p++;
		printf("The Player Won");
	}
	else if(ch==3 && rm==2)
	{
		p++;
		printf("The Player Won");
	}
	else if(ch==1 && rm==2)
	{
		c++;
		printf("The Computer Won");
	}
	else if(ch==2 && rm==3)
	{
		c++;
		printf("The Computer Won");
	}		
	else if(ch==3 && rm==1)
	{
		c++;
		printf("The Computer Won");
	}	
	else
	{
		printf("It Is A Tie");
	}
	
	printf("\n\nThe Player Has %d Points",p);
	printf("\nThe Computer Has %d Points",c);
}

void last(int ch)
{
	if(ch==0)
	{
		printf("\n\n\n*****Final Scores*****\n\n\n");
		printf("\n\nThe Player Has %d Points",p);
		printf("\nThe Computer Has %d Points",c);
		
		if(p>c)
		{
			printf("\n\n***The Player Won***");
		}
		else
		{
			printf("\n\n***The Computer Won***");
		}
		exit(0);
	}
}

int main()
{
	heading();
	while(1)
	{
		choice();
		random();
		calculation(ch,rm);
		last(ch);
	}

	
}
