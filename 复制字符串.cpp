#include<stdio.h>

void mycopy(char * pa,char * pb,int m)

{
  for(int i=1;i<m;++i)
	  *pa++;
  while(*pb!='\0')
  {
    *pa = *pb;
	*pa++,*pb++;
  }
  *pa='\0';
}

int main()

{
  char a[100];

  char b[100];

  int m;

  printf("请输入字符串:\n");

  gets(a);

  printf("请输入另一个要复制的字符串：\n");

  gets(b);

  printf("请输入要从第几位开始复制：\n");

  scanf("%d",&m);

  mycopy(a,b,m);

  printf("复制后的结果：%s\n",a);

  return 0;
}
//201905827 滕王阁