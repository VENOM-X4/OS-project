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

