//stack
#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int stk[SIZE];
int sp=-1;
int main()
{
void push(int);
int pop();
void display();
int item,opt;
do
{
printf("\n1.push\n2.pop\n3.exit\n4.diplay\n");
printf("enter your option:");
scanf("%d",&opt);
switch(opt)
{
case 1:
printf("enter value to be pushed:");
scanf("%d",&item);
push(item);
break;
case 2:
item=pop();
if(item!=-1)
printf("deleted value=%d\n",item);
break;
case 3:
return 0;
case 4:
display();
break;
}
}
while(9);
return 0;
}
void push(int x)
{
if(sp==SIZE-1)
printf("stack is full\n");
else
{
sp++;
stk[sp]=x;
}
}
int pop()
{
int x;
if(sp==-1)
{
printf("stack is empty\n");
return -1;
}
else
{
return stk[sp--];
}
}
void display()
{
if(sp == -1)
{
printf("stack is empty\n");
}
else
{
printf("stack elements are:\n");}
for(int i = sp; i>= 0; i--)
{
printf("%d\n",stk[i]);
}
}

