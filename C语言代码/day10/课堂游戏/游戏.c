
一、选择题
1． 若已定义int a=5; 下面对（1）、（2）两个语句的正确解释是（）。
(1) int *p=&a;                  (2) *p=a;
A． 语句（1）和（2）中的*p含义相同，都表示给指针变量p赋值。
B． (1)和(2)语句的执行结果，都是把变量a的地址值赋给指针变量p。
C． (1)在对p进行说明的同时进行初始化，使p指向a；
(2)变量a的值赋给指针变量p。
D． (1)在对p进行说明的同时进行初始化，使p指向a；

2． 若有说明：int a=2, *p=&a, *q=p;，则以下非法的赋值语句是（）。
A． p=q;           B． *p=*q;         C． a=*q;         D． q=a;

3． 若定义：int a=511, *b=&a；，则printf("%d\n", *b);的输出结果为：
A． 无确定值       B． a的地址       C． 512           D． 511


4．若有以下定义和语句：
int s[4][5], (*ps)[5];
ps=s;
则对s数组元素的正确引用形式是（）。
A． ps+1        B． *(ps+3)     C． ps[0][2]          D． *(ps+1)+3


5．下面判断正确的是（）。
A． char *s="girl";                等价于  char *s; *s="girl";
B． char s[10]={"girl"};            等价于  char s[10]; s[10]={"girl"};
C． char *s="girl";                等价于   char *s; s="girl";
D． char s[4]= "boy", t[4]= "boy";   等价于　char s[4]=t[4]= "boy"


二、编程实战

1、写一个函数交换两个变量中的值
2、写一个函数计算两个数的和、差、积
   注：此处只是演示指针的使用场景，
      开发中一个函数只完成一个功能，
      在OC中使用指针来返回函数处理的出错信息)
3、写一个函数，比较两个数。返回较大的那个数的地址。
4、写一个函数 ，把一个int型的数据逐字节输出。
5、写一个函数把数组中的元素反转
6、写一个函数计算字符串的长度
7、写一个函数把字符串反转
8、写一个函数对字符串数组按字母顺序排列后输出(可以使用字符串函数)
最后：这里没有蠢问题
     1、什么是指针？
     2、指针的作用是什么 ？
     3、什么是指针变量 ？
     4、*作用是什么？
     5、&作用是什么？
     4、指针为什么要区分类型？
     5、指针可以可以进行乘法操作吗？
     6、两个指针变量可以相加吗 ？
     7、两个指针变量可以相减吗？
     8、指针的算术运算主要用在什么地方 ？
     9、指针与数组名的区别是什么？
     10、使用指针定义的字符串与使用数组定义的字符串的区别是什么？
     11、什么是函数指针 ？




