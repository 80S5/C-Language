#include <stdio.h>

int man (int a, int b);                 /*函数说明*/

void main()                             /*主函数*/
{
	int x, y, z;                        /*变量说明*/
	
	printf("input two numbers:\n");
	
	scanf("%d %d",&x, &y);              /*输入x, y值*/
	
	z = max(x, y);                      /*调用max函数*/
	
	printf("maxmum = %d", z);           /*输出*/
}
		 
	int max(int a, int b)                   /*定义max函数*/
{
		if(a > b) return a;                 /*比较a, b大小*/
			else return b;                      /*把结果返回主函数*/
}
					     

	/*首先在屏幕上显示提示串，请用户输入两个数
	回车后由scanf函数语句接收这两个数送入变量x, y中
	然后调用max函数，并把x, y的值传送给max函数的参数a, b
	在max函数中比较a, b的大小，把大者返回给主函数的变量z
	最后在屏幕上输出z的值*/

