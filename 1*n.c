#include <stdio.h>
  
void main()
{
	int i, t;
	t = 1;
	i = 2;
			       
	while(i <= 10)		//这个数值可根据需要进行更改
	{
		t = t * i;
		i = i + 1;
	}
	printf("%d", t);
}


		/*这是用来做递增是的乘法运算程序
		1*2*3*4*5*6*7*8*9*10*n */
