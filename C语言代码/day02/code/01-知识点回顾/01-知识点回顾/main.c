//
//  main.c
//  01-知识点回顾
//

/*
   1、计算机中的一切都是由0、1组成的
   2、C语言程序是函数
      main函数它是程序入口
 
 
  源代码  -》 编译 -》 链接
 
 
  编译顺序：按照文件从上到下的顺序
  执行顺序：在函数内部是按照从上到下顺序执行的
 
  关键字：系统提供给我们表示特殊含义单词，特征：都是小写字母，在Xcode中都是紫褐色，标识符不可以与关键字重名
  标识符：程序员在为某些东西起的名字(函数、变量...)
  命名规则：1、字母、数字、下划线
          2、不能以数字开头
          3、严格区分大小写
          4、不可以与关键重名
  命名规范：1、一定要起一个有意义的名字
           2、驼峰标识
  注释：是给程序员看的，方便程序之间沟通
       不参与编译
 
 
 
 */

#include <stdio.h>

int print()
{
   
    printf("C语言很简单\n");
    return 0;
}


int main()
{
    
    print();
    
//    printf("今天又是愉快的一天\n");
//    printf("今天又是愉快的一天\n");
    
    
    return 0;
}