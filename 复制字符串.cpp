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

  printf("�������ַ���:\n");

  gets(a);

  printf("��������һ��Ҫ���Ƶ��ַ�����\n");

  gets(b);

  printf("������Ҫ�ӵڼ�λ��ʼ���ƣ�\n");

  scanf("%d",&m);

  mycopy(a,b,m);

  printf("���ƺ�Ľ����%s\n",a);

  return 0;
}
//201905827 ������