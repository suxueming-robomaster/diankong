
//202610830225
//苏雪铭 
#include <stdio.h>

int main()
{
	float a=0;
	float b=0;
	float c=0;
	scanf("%f%f%f",&a,&b,&c);
	if(a + b > c&&a + c > b&&b + c > a)
	{
		printf("能构成三角形"); 
	}
	else
	{
		printf("不能构成三角形");
	}
	return 0;
	
}
