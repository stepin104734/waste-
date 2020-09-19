#include "test_factorial.h"
#include<stdio.h>
#include<string.h>
#define MAX 20
#include "factorial.h"
typedef struct
{
    int V[MAX];
    int rp;
    int fp;
    int counter;
}QUE;
  QUE p1;
  QUE p2;
  QUE p3;
  QUE p4;

int out(QUE *arg )
{
    int element;
    element = arg->V[ arg->fp];
    arg->fp++;
    arg->fp = arg->fp % MAX;
    arg->counter--;
    return element;
}

void display( QUE arg )
{
    int i , j;
    j = arg.fp;
    for( i=1; i<=arg.counter; i++)
    {
        printf("[%d]\t", arg.V [ j ]);
        j++;
        j = j % MAX;
    }
}

void in( QUE *arg , int id )
{
    if( arg->counter == MAX )
        printf("Ur requested can't be processed now...\n");
    else
    {
        arg->V [ arg->rp] = id;
        arg->rp = arg->rp+1;
        arg->rp = arg->rp % MAX;
        arg->counter++;
}
}
int last(QUE *arg )
{
    int element;
    element = arg->V[ arg->fp];
    arg->fp++;
    arg->fp = arg->fp % MAX;
    arg->counter--;
    return element;
}
int show(QUE *arg,int id)
{
    int i=arg->V[id-1];
    return(i);
}
int emergency_text(int b1)
{
    if(b1>80)
        return(1);
    else
        return(0);
}
int emergency_call(int b1)
{
    if(b1>80)
        return(1);
    else
        return(0);
}
int emergency_alert(int b1)
{
    if(b1>80)
        return(100);
    else
        return(0);
}
int max(QUE *arg)
{
    int i=arg->V[arg->fp];
    int k=arg->rp;
    int j=arg->fp;
    while(j!=k)
    {
    if(arg->V[j]>i)
    i=arg->V[j];
    j++;
    }
    return(i);
}
int min(QUE *arg)
{
    int i=arg->V[arg->fp];
    int k=arg->rp;
    int j=arg->fp;
    while(j!=k)
    {
    if(arg->V[j]<i)
    i=arg->V[j];
    j++;
    }
    return(i);
}

int main(void)
{

	test_main();


  p1.fp =0;
  p1.rp = 0;
  p1.counter = 0;
  p2.fp = 0;
  p2.rp = 0;
  p2.counter = 0;
  p3.fp = 0;
  p3.rp = 0;
  p4. counter = 0;
  p4.fp=0;
  p4.counter = 0;
  p4.rp = 0;
  while(0)
  {
      if(a==1 && b==1)
      {
          b1++;
          b1=b1*10;
          printf("both metal and wet trash entered together result as metallic trash\n");
          in(&p1,b1);
      }
      if(a==1 && c==1)
      {
          b1++;
          b1=b1*10;
          printf("both paper and wetness will make trash as wet trash\n");
          in(&p1,b1);
      }
      if(a==1 && d==1)
      {
          b4++;
          b4=b4*10;
          printf("since plastic absorb very little amount of water it result in a plastic trash\n");
          in(&p4,b4);
      }
      if(b==1 && c==1 )
      {
          b2++;
          b2=b2*10;
          printf("Since metallic sensor comes first in order trash is detected to be metallic\n");
          in(&p2,b2);
      }
      if(b==1 && d==1)
      {
          b2++;
          b2=b2*10;
          printf("Since metal is detected first trash of plastic and paper will be metallic\n");
          in(&p2,b2);
      }
      if(c==1 && d==1)
      {
            printf("impossible test case\n");
      }
      if(a==1 && b==1 && c==1)
      {
          printf("trash is entered in bulk \n");
          printf("assuming trash to be wet...\n");
          b1++;
          b1=b1*10;
          in(&p1,b1);
      }
            if(a==1 && b==1 && d==1) //c and d cant exist as 1 together
      {
          printf("trash is entered in bulk \n");
          printf("assuming trash to be metallic...\n");
          b2++;
          b2=b2*10;
          in(&p2,b2);
      }
  if(a==1)
  {
      b1++;
      b1=b1*10;
      in(&p1,b1);
      a=0;
  }
  else if(b==1)
  {
      b2++;
      b2=b2*10;
      in(&p2,b2);
      b=0;
  }
  else if(c==1)
  {
      b3++;
      b3=b3*10;
      in(&p3,b3);
      c=0;
  }
  else if(d==1)
  {
     b4++;
     b4=b4*10;
     in(&p4,b4);
     d=0;
  }

}

	return 0;
}
