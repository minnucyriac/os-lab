#include<stdio.h>
struct process
{
int pid,at,bt,rt,f,pr;
}p[10],t;

main()
{
   int wait=0,turn=0,i,j,n,time=0,ps[50],ts[50],p1=0,t1=0;
   int pre,small,count=0,end,remain;
   printf("enter the number of process\n");
   scanf("%d",&n);
   printf("enter process id ,arrival time,burst time,priority \n");
   for(i=0;i<n;i++)
   {
   scanf("%d%d%d%d",&p[i].pid,&p[i].at,&p[i].bt,&p[i].pr);
   p[i].rt=p[i].bt;
   }
   for(i=0;i<n-1;i++){
    for(j=0;j<n-i-1;j++){
     if(p[j].at>p[j+1].at){
        t=p[j];
        p[j]=p[j+1];
        p[j+1]=t;
     }
    }
   }
   p[9].pr=99;
   pre=9;
   remain=n;
   for(time=p[0].at;remain!=0;time++)
   {
     small=9;
     for(i=0;i<n;i++)
     {
      if(p[i].at<=time && p[i].pr<p[small].pr && p[i].rt>0)
      {
        small=i;
      }
     }
    p[small].rt--;
    if(pre!=small)
    {
     ps[p1++]=p[small].pid;
    // printf("p%d\n",p[small].pid);
     ts[t1++]=time;
    }
    pre=small;
    if(p[small].rt==0)
    {
      remain--;
      end=time+1;
      wait+=end-p[small].at-p[small].bt;
      turn+=end-p[small].at;
    }
   }

  for(i=0;i<p1;i++)
    printf("  P%d  |",ps[i]);
  printf("\n");
  for(i=0;i<t1;i++)
     printf("%d     ",ts[i]);
   printf("%d",end);
  printf("\n");
  printf("avg waiting time = %f\n",(wait*1.0)/n); 
  printf("avg turnaround time = %f\n",(turn*1.0)/n);
}

