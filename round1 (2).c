#include<stdio.h>
#include<stdlib.h>
struct process
{
int pid,at,bt,rt,f,pr;
}p[10],t;

main()
{
   int q,wait=0,turn=0,i,j,remain,n,time=0,ps[50],ts[50],p1=0,t1=0;
   int pre,small;
   printf("enter the number of process\n");
   scanf("%d",&n);
   printf("enter process id ,arrival time,burst time,priority \n");
   for(i=0;i<n;i++)
   {
   scanf("%d%d%d%d",&p[i].pid,&p[i].at,&p[i].bt,&p[i].pr);
   p[i].rt=p[i].bt;
   }   pre=10;
       remain=n;
       printf("enter time slice\n");
       scanf("%d",&q);
       for(i=0;i<n;i++)
       {
         p[i].rt=p[i].bt;
         p[i].f=0;
       }
       for(i=0;remain!=0;)
       {
        if(p[i].rt<=q&&p[i].rt>0)
        {
         time+=p[i].rt;
         p[i].rt=0;
         p[i].f=1;
         ps[p1++]=p[i].pid;
         ts[t1++]=time;
        }
        else if(p[i].rt>0)
        {
         p[i].rt-=q;
         time+=q;
         ps[p1++]=p[i].pid;
         ts[t1++]=time;
        }
       if(p[i].rt==0&&p[i].f==1)
       {
         remain--;
         wait+=time-p[i].at-p[i].bt;
         turn+=time-p[i].at;
       }
       if(i==n-1)
        i=0;
       else if(p[i+1].at<=time)
        i++;
       else
        i=0;
       }
      for(i=0;i<p1;i++)
          printf(" P%d  |",ps[i]);
      printf("\n");
      printf("0    ");
      for(i=0;i<t1;i++)
         {
           if(i==0)
              printf("%d   ",ts[i]);
           else
               printf("  %d    ",ts[i]);
          }
             printf("\nAverage Waiting Time= %f\n",wait*1.0/n); 
             printf("Avg Turnaround Time = %f\n",turn*1.0/n);
 }
