#include<stdio.h>
int x,size;
int hash[100];
int prime(int size);
void initialize();
void insert();
void display();
void main()
{
	int n,s=1,choice,item,y=0;
	printf("Enter the size of the table\n");
	scanf("%d",&size);
while(s!=0)
{
	if(size%2==0)
	{
		size=size+1;
		s=prime(size);
	}
	else
	{
		size=size+2;
		s=prime(size);
	}
}
printf("The size of the table is %d",size);
initialize();
do
{
	printf("1 - Insert\n");
	printf("2 - Display\n");
	printf("Enter your choice\n");
	scanf("%d",&choice);
