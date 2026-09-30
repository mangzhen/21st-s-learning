  //六道题
#include<stdio.h>

int main()
{
  int num1 = 0;
  printf("请输入一个整数\n");
  scanf("%d",&num1);
  while(num1 > 1 && num1 % 2 == 0)//为什么想不出来？就是因为还不熟while！
  {
    num1 = num1 / 2;//这是一个自我迭代
  }
  if(num1 == 1)//这里就得用上迭代完了的num1
  {
    printf("yes yes yes yes yes!\n");
  }
  else
  {
    printf("no!no!no!no!no!\n");
  }
  //挺难的其实，必须得搞清楚两个输出结果！
  //一正一反，那么就考虑if和else的位置 ちなみに、if,else这两个是并列的，所以两个大括号都是独立的
  double height = 0.1;
  int count = 0;
  while(height <= 8844430.0)//千万别写成=,否则这个程序直接卡死，因为这是个赋值，写成==也不行，因为这个条件不成立
  {
    height = height*2;//迭代一定要赋值！！！
    count++;
  }
    printf("对折次数为%d\n",count);

  //反转术式来了
  int num2 = 0;
  printf("来!输入一个整数\n");
  scanf("%d",&num2);
  int rev = 0;
  while(num2 != 0)
  {
    int wow = 0;
    
    wow = num2 % 10;
    num2 = num2 / 10;//这里就直接把这个数丢掉了,因为整数留不了小数
    //丢掉了num2,后面自然就不会在运算过程中把它拉进来了
    printf("num2 = %d\n",num2);
    rev = rev * 10 + wow;//又是一个自迭代,拿到一个数就往左边挪一位


  }
  printf("反转！%d\n",rev);
  return 0;
}

