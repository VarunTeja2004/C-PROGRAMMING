#include<stdio.h>
int rec(int);
int main()
{
    int a;
	printf("entre the number :");
	scanf("%d", &a);
	printf("the factorial of %d=%d",a,rec(a));
	return 0;
}
int rec(int x)
{
	int f;
	if(x==1)
	return 1;
	else
	f=x*rec(x-1);
	return f;
}
