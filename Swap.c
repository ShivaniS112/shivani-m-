#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	
	printf("Before swapping....a:%d,b:%d\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("After swapping....a:%d,b:%d\n",a,b);
	return 0;
}

Output

Enter the value of a:10
Enter the value of b:20
Before swapping....a:10,b:20
After swapping....a:20,b:10

Enter the value of a:-100
Enter the value of b:-200
Before swapping....a:-100,b:-200
After swapping....a:-200,b:-100
