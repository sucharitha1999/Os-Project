#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  char a[10][5],temp[10];
  int i,j,pt[50],wt[50],totwt=0,prt[10],temp1,n,temp2;
  float avgwt;
  printf("\n****************************\n");
 printf("enter no of processes:  ");
 scanf("%d",&n);
  for(i=0;i<n;i++)
  {
  printf("enter process%d name:",i+1);
 scanf("%s",&a[i]);
  printf("enter process time:");
 scanf("%d",&pt[i]);
  printf("enter priority:");
  scanf("%d",&prt[i]);
  }
 for(i=0;i<n-1;i++)
 {
 for(j=i+1;j<n;j++)
 {
   if(prt[i]>prt[j])
 {
   temp1=prt[i];//the priority will be compared before arranging them in queue
 prt[i]=prt[j];//first swap is for priorities
  prt[j]=temp1;//second swap is for process time
  temp2=pt[i];//third swap is for the proccess
  pt[i]=pt[j];
  pt[j]=temp2;
 strcpy(temp,a[i]);
 strcpy(a[i],a[j]);
  strcpy(a[j],temp);
  }
  }
  }
 wt[0]=0;
  for(i=1;i<n;i++)
  {
   wt[i]=wt[i-1]+pt[i-1];//calculating the waiting time of the proccess
   totwt=totwt+wt[i];
   }   
avgwt=(float)totwt/n;//average of the waiting time    
printf("p_name\t p_time\t priority\tw_time\n");
for(i=0;i<n;i++)  
{
   printf(" %s\t %d\t %d\t %d\n" ,a[i],pt[i],prt[i],wt[i]);
   }
  printf("total waiting time=%d\n avg waiting time=%f",totwt,avgwt);
  getch();
   }

