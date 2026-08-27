
/*
#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number: ");
	scanf_s("%d", &num);			// Use scanf_s for secure input in	C
	printf("num = %d\n", num);
	printf("num = %o\n", num);
	printf("num = %x", num);
	return 0;
}

*/














/*********************************
 
 

#include<stdio.h>

int main()
{
	double a, b, c, d;
	a = 3.14;
	b = -0.001;
	c = 12.;
	d = .0;

	printf("a = %.3f\n", a);
	printf("b = %.3f\n", b);
	printf("c = %.3f\n", c);
	printf("d = %.3f\n", d);
	return 0;
}


*/













/**********************
 

#include<stdio.h>

int main(void)
{
	char z;
	printf("Enter a character: ");
	scanf_s("%c", &z);
	printf("character = %c\n", z);
	printf("ASCII value = %d\n", z);	// Print the ASCII value of the character (%d)
	return 0;
}


*/









/*
* 
* printf("\\")；			// 打印 一个 反斜杠字符（same as 双引号&单引号）
* 
*/













/*
#include<stdio.h>
int main()
{
	printf("=====Player=====\n");
	printf("name\tlevel\tscore\n");			// \t is a tab character
	printf("Tom\t10\t999\n"); 
	printf("\nHe said:\I'm a hero\"");		//打印包含双引号的字符串| \n置于字符串首位置使其换行再输出
	return 0;
}



*/










/*
* 
* 
* 

#include<stdio.h>
#define HP 100
#define ATK 25
#define GOLD 1000		//define预处理和替换
int main(void)
{
	printf("====玩家初始属性====\n");
	printf("HP:%d\n", HP);
	printf("ATK:%d\n", ATK);
	printf("GOLD:%d\n", GOLD);
	return 0;
}






*/








/********************








#include<stdio.h>
int main()
{
	char name[5] = "Hero";		//char数组存储字符串(末尾自动添加空字符)
	int lv = 1;
	int hp = 100;
	int atk = 20;
	printf("====角色创建成功====\n");
	printf("name: %s\n", name);
	printf("level: %d\n", lv);
	printf("HP: %d\n", hp);
	printf("ATK: %d\n", atk);
	return 0;
}





*/





/******************

#include<stdio.h>
#include<limits.h>
int main()
{
	short s = SHRT_MAX;		//short类型最大值
	int i = INT_MAX;		//int类型最大值
	long l = LONG_MAX;		//long类型最大值
	unsigned int ui = UINT_MAX;	//unsigned int类型最大值

	printf("=====整形极限=====\n");
	printf("short最大值为%d\n", s);
	printf("占用：%d字节\n\n", sizeof(s));		//sizeof()返回变量占用的字节数
	printf("int最大值为%d\n", i);
	printf("占用：%d字节\n\n", sizeof(i));
	printf("long最大值为%d\n", l);
	printf("占用：%d字节\n\n", sizeof(l));
	printf("unsigned int最大值为%u\n", ui);		//%u用于打印无符号整型;%d会打印负数（-1）
	printf("占用：%d字节\n\n", sizeof(ui));
	return 0;
}



*/

/***********

printf:%d,%u,%c,%s,%f,%e		//打印整型、无符号整型、字符、字符串、浮点数、科学计数法

*/




/************
* 
* 
* 
* 
//打印三角形
#include<stdio.h>

int main()
{
	int N = 0;
	scanf_s("%d", &N);
	printf("%d", N);
	printf("%d%d%d\n", N, N, N);
	printf("%d%d%d%d%d\n", N, N, N, N, N);
	printf("%d%d%d%d%d%d%d%d\n", N, N, N, N, N, N, N, N);
	return 0;
}



*/




/****************

#include<stdio.h>
int main()
{
	float a = 3.148989844;
	double b = 2.718281828;
	long double c = 1.1414213;

	printf("float a = %.10f,占用字节为%d\n", a, sizeof(a));
	printf("double a = %f,占用字节为%d\n", b, sizeof(b));
	printf("long double a = %f,占用字节为%d\n", c, sizeof(c));
	return 0;
}



*/







