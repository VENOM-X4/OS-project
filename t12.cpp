#include<stdio.h>
int main()
{
	char ch;
	int n,i,j,ptr,c,z,sum=0,avgtime;
	int at[10],bt[10],wt[10],priority[10],pn[10],tat[10];
	

	printf("__________________________________\n");
	printf("Enter the the no. of processes : ");
	scanf("%03d",&n);
	printf("__________________________________\n");
		for (i=0;i<n;i++)
	{

		printf("\n\nprocess [%03d] \n",i+1);
		printf("++++++++++++++++++++++++\n");
		printf("Enter arrival time : ");
		scanf("%03d ",&at[i]);
    	printf("++++++++++++++++++++++++\n");    
        printf("Enter Burst time : ");
		scanf("%03d ",&bt[i]);
		printf("+++++++++++++++++++++++++\n");
		printf("Enter Priority : ");
		scanf("%03d ",&priority[i]);
		printf("++++++++++++++++++++++++++\n");
		pn[i]=i+1;
	}
for (i=0;i<n;i++)
	{
		ptr=i;
		
		for (j=i+1;j<n;j++)
		{
			if(priority[j]<priority[ptr])
			{
				ptr=j;
			}
		}
		
		c=priority[i];
		priority[i]=priority[ptr];
		priority[ptr]=c;
		
		c=bt[i];
		bt[i]=bt[ptr];
		bt[ptr]=c;
		
		c=pn[i];
		
		pn[i]=pn[ptr];
		pn[ptr]=c;
		
	}
	    wt[0]=0;  
	      for(i=1;i<n;i++)
	      {
	      	wt[i]=0;
	      	for(j=0;j<i;j++)
	      	{
	      		wt[i] = wt[i]+bt[j];
			}
            
			z = z+wt[i];
			
		  }
	
	
	avgtime=z/n;
	fflush(stdin);
	printf("__________________________________________________________________________________________________\n");
    	printf("|  PROCESS   |  ARRAIVAL TIME  |  BURST TIME  |  WAITING TIME  |  PRIORITY  |  TURN AROUND TIME  | \n");
	
	for (i=0;i<n;i++)
	{
		tat[i]=bt[i]+wt[i];
		printf("|    %03d     |        %03d      |      %03d     |    %03d     |     %03d    |         %03d        | \n",pn[i],at[i],bt[i],wt,pn[i],tat[i]);
		sum= sum+tat[i];
		
	}
	printf("__________________________________________________________________________________________________\n");

	
	int avgtatime= sum/n;
	printf("______________________________________");
	printf("\n|  AVERAGE WAIT TIME        : %03d  |",avgtime);
	printf("\n|  AVERAGE TURNAROUND TIME  : %03d  |",avgtatime);
	printf("\n____________________________________");

}


