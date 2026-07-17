#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter Number A: ");
	scanf("%d",&a);
	
	printf("Enter Number B: ");
	scanf("%d",&b);
	printf("Before Swaping a=%d,b=%d\n",a,b);
    c=a,a=b,b=c;
    printf("After Swaping: a=%d,b=%d",a,b);
	return 0;
	
	
}
