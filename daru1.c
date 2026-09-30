#include<stdio.h>

int main()
{
  /*
  for和while有啥区别？怎么说呢，第一个的区别不大
  由于形式上的区别（这个在C89下就没有），for(int i...),
  在小括号里定义，因此for的变量生命周期只持续在for的大括号里；
  
  另一个，在不知变量的循环、次数和范围，只知结束条件时，用while，
  都已知时，用for
  */
  //一、计算1~100累加值
  int num = 0;
  for(int i = 1;i <= 100;i++)
  {
    num = num + i;
  }
  printf("num = %d\n",num);
  //显然for好！
  //二、循环读取文件中的内容  这个目前还无法演示，但肯定用while




  return 0;
}
