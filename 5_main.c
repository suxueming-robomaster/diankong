
//202610830225
//苏雪铭 
#include <stdio.h>
int main ()
{
	float a=0;
	char op;
	float b=0;
	scanf("%f %c %f", &a, &op, &b);
	if(op == '+')
	{
		printf("%.2f\n",a + b);
	}
	else if(op == '-')
	{
		printf("%.2f\n",a - b);
	}
	else if(op == '*')
	{
		printf("%.2f\n",a * b);
	}
	else if(op == '/')
	{
		if(b == 0)
		{
			printf("错误:除数不能为0\n"); 
		}
		else
		{
			printf("%.2f\n",a / b);
		}
	}
	else
	{
		printf("错误：不支持的运算符\n");
	}
	return 0;
	
}
