一、改错题
1.
#include <stdio.h>

int main()
{
    
    int a = 10;
    
    switch (a)
    {
        case 0:
            int b = 20 + a;
            break;
            
        case 2:
            
            break;
    }
    
    return 0;
}

二、分析题
1.	判断输出结果
int x = 2,y=3;
switch(x)
{
    case 2:
        y++;
    case 3:
        y+=2;
    case 4:
        y+=3;
    default:
        y = 0;
        break;
}
printf("y=%d\n", y);

2.	判断输出结果
int x = 1,y = 1;
if(x++==2 && ++y==2) {
    x =7;
}
printf("x=%d, y=%d\n", x, y);

3.	判断输出结果
int x = 1,y = 1;
if(x++==2 || ++y==2) {
    x =7;
}
printf("x=%d, y=%d\n", x, y);

4．以下程序的运行结果是（）。
#include ”stdio.h”
main()
{ int a=1;
    if (a++>1) printf(”%d\n”, a);
    else      printf(”%d\n”, a--);
}


5．当a=1,b=2,c=4,d=3时，执行完下面一段程序后x的值是（）。
if (a<b)
if (c<d) x=1;
else
if (a<c)
if (b<d) x=2;
else x=3;
else x=4;
else x=5;

6．执行以下程序段后，变量x,y,z的值分别为（）。
int a=1,b=0, x, y, z;
x=(--a==b++)?--a：++b;
y=a++;
z=b;

7．以下程序的输出结果是（）。
#include ”stdio.h”
main()
{
    int a=5, b=4, c=6, d;
    printf(”%d\n”, d=a>b? a>c?a:c :b);
}

8．若a、b、c1、c2、x、y均为整型变量，正确的switch 语句是（）。
A．switch (a+b);                    B．switch a
{
case 1: y=a+b; break;               {  case c1: y=a-b; break;
case 0: y=a-b;                        case c2: x=a*d; break;
    break;                       default: x=a+b;
}                                 }
C．switch (a*a+b*b)                 D．switch(a-b)
{ case 3:                          {  default: y=a*b; break;
case 1: y=a+b; break;                 case 3: x=a+b; break;
case 3: y=b-a; break;                 case 10: case 11: y=a-b; break;
}
}

9．执行下列程序，输入为3的数出结果是（）。
#include ”stdio.h”
main()
{
    int k;//3
    scanf(”%d”, &k);
    switch(k)//3
    { case 1: printf(”%d\n”, k++);
        case 2: printf(”%d\n”, k++);
        case 3: printf(”%d\n”, k++);//3  k=4
        case 4: printf(”%d\n”, k++);//4 k=5
            break;
        default: printf(”Full!\n”);
    }
}


10．有如下程序，写出该执行结果（）。
#include ”stdio.h”
main()
{
    float x=2.0, y;
    if (x<0.0) y=0.0;
    else if (x<10.0) y=1.0/x;
    else y=1.0;
    printf(”%f\n”,y);
}

11．以下程序的运行结果是（）。
#include ”stdio.h”
main()
{
    int a=2,b= -1,c=2;
    if (a<b)
        if (b<0)
            c=0;
        else c++;
    printf(”%d\n”,c);
}

12．有以下程序，程序运行后的输出结果是（）。
#include ”stdio.h”
main()
{
    int a=15, b=21, m=0;
    switch (a%3)//0
    {  case 0:
        {
            m++;//m=1
            break;
        }
        case 1:
        {
            m++;
            switch (b%2)
            {  default: m++;
                case 0: m++; break;
            }
        }
    }
    printf(”%d\n”,m);//1
}

13． 若从键盘输入58，则输出结果是________。
#include ”stdio.h”
main()
{
    int a;
    scanf(”%d”, &a);
    if (a>50)  printf(”%d”, a);
    if (a>40)   printf(”%d”,a);
    if (a>30)  printf(”%d”,a);
}

14． 以下程序的运行结果是________。
#include ”stdio.h”
main()
{
    int a,b,c,s,w,t;
    s=w=t=0;
    a= -1; b=3; c=3;
    if (c>0) s=a+b;
    if (a<=0)
    { if (b>0)
        if (c<=0) w=a-b;
    }
    else if (c>0) w=a-b;
    else t=c;
    printf(”%d  %d  %d”, s,w,t);
}

15． 以下程序的运行结果是________。
#include ”stdio.h”
main()
{
    int a,b,c,d,e;
    a=c=1;
    b=20;
    d=100;
    if (!a) d=d++;
    else if (!b)
        if (d) d= --d;
        else   d= d--;
    printf(”%d\n\n”, d);
}

16． 以下程序的运行结果是________。
#include ”stdio.h”
main()
{
    int a, b= 250, c;
    if ((c=b)<0) a=4;
    else if (b=0) a=5;
    else a=6;
    printf(”\t%d\t%d\n”,a,c);
    if (c=(b==0))
        a=5;
    printf(”\t%d\t%d\n”,a,c);
    if (a=c=b) a=4;
    printf(”\t%d\t%d\n”,a,c);
}

三、编程题
1.
/*
 利用简单分支选择语句判断输入的一个整数是否是偶数
 */

2.
/*
 编写一个程序，要求从键盘上输入某哥学生的四科成绩，求出该学生的最高分和最低分
 */

3.
/*
 已知某公司员工的工资底薪为500，员工销售的软件金额与提成方式如下：
 销售额 ≤2000            没有提成
 2000 < 销售额 ≤ 5000    提成8%
 5000 < 销售额 ≤ 10000   提成10%
 销售额 ≥ 10000          提成12%
 利用switch
 */


4.
/*
   题目：程序运行的时候提示下列信息
   请输入相应数字选择需要执行的运算：
   1 加法
   2 减法
   
   用户选择运算后，再提示用户输入两个需要进行运算的整数，输入完毕后就输出运算结果
*/
5.
/*
铁路托运行李规定：行李重不超过50公斤的，托运费按0.15元每公斤计算，如果超过50公斤，超出部分每公斤加收0.1元。编程实现上述功能。
*/

6.
/*
    有3个整数a,b,c，由键盘输入，输出其中最大的数。
*/

7.
/*
 有一个函数：x<1的时候，y = x；1<=x<10的时候，y=2x-1；x>=10的时候，y=3x-11。写一段程序，输入x，输出y值。
*/

8.
/*
 给出一百分制成绩，要求输出成绩等级’A’，’B’，’C’，’D’，’E’。90分以上为’A’，80~89分为’B’，70~79分为’C’，60~69分为’D’，60分以下为’E’。
*/

9.
/*
某个自动加油站有 ‘a’，‘b’，‘c’三种汽油品种，单价分别为 6.92，7.37，7.64(元/公升)，也提供了“自己加”或“协助加”两个服务等级，这样用户可以得到5%或10%的优惠，请编程序针对用户输入加油量x，汽油品种y和服务类型z（‘f’—自动加，‘m’—自己加，‘e’—协助加），（注：‘f’—自动加无优惠），计算应付款pay。（请用多分支选择switch语句）。
*/