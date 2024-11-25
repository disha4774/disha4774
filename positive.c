#include<stdio.h>
int main()
{
int x;
printf("enter the value of num\n");
scanf("%d",&x);
if (x>0)
{
printf("num is positive\n");
}
else
{
printf("error\n");
}

/*
int x=num%10;
{
printf("unit place num%d\n",x);
}
int b=num/10;
int y=b%10;
{
printf("tens place num%d\n",y);
}
int c=b/10;
int z=c%10;
{
printf("hundred place num%d\n",z);
}
int a=x+y+z;
{
printf("addition of numbers is %d\n",a);
}*/

while (x>0)
{
int temp=x%10;
int k=x/10;
x=k;
printf("value of temp is: %d\n",temp);
}
return 0;
}

