#include <math.h>
#include <stdio.h>

void main()
{
	double x ,s;
	printf("input number:\n");

	scanf("%lf", &x);
	s = sin(x);

	printf("sine of %lf is %lf", x, s);
}


/*这是个求正弦函数的代码

从X输入一个数值，并赋值给S

显示运算结果 

sin 是正弦函数，所以头文件用到了#include <math.h>

scanf 是输入函数 &x是让用户输入一个数值

s = sin(x) 用户输入的数值复制给s

还有最后一个问题就是在linux 下写c程序用gcc 进行编译会出现

/tmp/ccynBlAN.o: In function `main':
he.c:(.text+0x36): undefined reference to `sin'
collect2: error: ld returned 1 exit status

这个问题不是 void main()  也不是 int main()

主要问题就是 在 gcc编译时候多加一个 -lm

-lm是连接数学库；
-lm命令是使编译的时候，链接数学库， -lptread 链接线程库，可以使自己编译的库 ；
g++编译程序成为.o目标函数，然后需要和库函数连接到一起；
gcc 在编译时就可以将其替换为对应的值（gcc 优化的一部分），
从而不需要链接 sqrt 所在的数学库 libm；而像 sqrt(n); 
这种调用，一般无法做这种替换，因此需要链接 libm。


这也就是为什么要加 -lm 这个参数

比如
gcc he.c -lm
*/

