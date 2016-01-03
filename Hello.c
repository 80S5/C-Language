#include <stdio.h>

/* main : generate some simple output */

int main(void)

{
	printf("Hello world \n");
	return 0;
}

/*
	程序主体的int main(void){...return 0;}结构，
	每个程序按惯例必须要写的部分（Boilerplate）。
	但要注意main是一个特殊的名字，
	C程序总是从main里面的第一条语句开始执行的，在这个程序中是指printf这条语句。


	第3行的/* ... */结构是一个注释（Comment），
	其中可以写一些描述性的话，解释这一段程序在做什么，
	注释只是写给程序员看的，编译器会忽略从/*到*/的所有字符，
	所以写注释没有语法规则，爱怎么写就怎么写，并且不管写多少都不会被编译进目标代码。

	printf的作用是把消息打印到屏幕，
	注意这条语句的末尾有一个;号（Semicolon），
	C语言规定每条语句末尾都要有一个;号，printf的下一条语句也是如此。

	C语言用{}号（Brace或Curly Brace）把语法结构分成组，
	在上面的程序中printf和return语句套在main的{}号中，表示它们属于main的定义之中。
	我们看到这两句相比main那一行都缩进（Indent）了一些，
	在代码中可以用若干个空格（Blank）和Tab字符来缩进，缩进不是必须的，
	但这样使我们更容易看出这两行是属于main的定义之中的，要写出漂亮的程序必须要有整齐的缩进。

	一个好的习惯是打开gcc的-Wall选项，也就是让gcc提示所有的警告信息，
	不管是严重的还是不严重的，然后把这些问题从代码中全部消灭。
	








*/
