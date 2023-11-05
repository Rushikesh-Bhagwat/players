#include"players.h"
void storevalue(players* p)
{
	
	int i;
	for(i=0;i<n;i++)
	{
		
		printf("\n____________________________________________Enter the informatiin %d Players_____________________________________\n\n",i+1);
		printf("Enter the players jersey number::");
		scanf("%d",&p[i].jno);
		fflush(stdin);
		printf("Enter the players name::");
		gets(p[i].name);
		printf("Enter the players runs::");
		scanf("%d",&p[i].runs);
		printf("Enter the players wickets::");
		scanf("%d",&p[i].wickets);
		printf("Enter the players number of matches::");
		scanf("%d",&p[i].N_match);
		
	}
}
void display(players* p)
{
	int i;
	
	printf("jerseyNo\tName\tRuns\tWickets\tNoMatches\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t\t%s\t%d\t%d\t%d \n",p[i].jno,p[i].name,p[i].runs,p[i].wickets,p[i].N_match);
	}
}

void search(players* p,int jNo)
{
	
	
	int i,flag=0;
	for(i=0;i<n;i++) 
	{
		//printf("%d",i);
		if(p[i].jno==jNo)//if(strcmp(p[i].name,name)==0)
		{ 
			flag=1;
			printf("jersey number is::%d\n",p[i].jno);
			printf("name ::%s\n",p[i].name);
			printf("Runs::%d\n",p[i].runs);
			printf("wickets::%d\n",p[i].wickets);
			printf("number of matches::%d\n",p[i].N_match);
		}
	}
	if(flag==0)
	printf("jersey number not found:%d",jNo);
}

void searchName(players* p,char*pname)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(strcmp(p[i].name,pname)==0)
		{
			flag=1;
			printf("jersey number is::%d\n",p[i].jno);
			printf("name are::%s\n",p[i].name);
			printf("Runs::%d\n",p[i].runs);
			printf("wickets::%d\n",p[i].wickets);
			printf("number of matches::%d\n",p[i].N_match);
		}
	}
	if(flag==0)
	printf("players not found this name");

}
void update(players* p,int jNo)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(p[i].jno==jNo)
		{
			flag=1;
			printf("Enter the player runs::");
			scanf("%d",&p[i].runs);
			printf("Enter the player wickets:");
			scanf("%d",&p[i].wickets);
			printf("Enter the player number of matches:");
			scanf("%d",&p[i].N_match);
			
//		    printf("jersey number is:%d\nName:%s\nRuns:%d\nWickets:%d\nNumber of matches:%d\n",p[i].jno,p[i].name,p[i].runs,p[i].wickets,p[i].N_match);
//			//printf("Successfully updated..");
		}
		
		}
		if(flag==0)
		printf("jersey number not found:%d",jNo);	
		display(p);
}
void  delet(players* p,int jNo)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(p[i].jno==jNo)
		{
			flag=1;
			p[i]=p[i+1];
			
//			strcpy(p[i].name,p[i+1].name);
//			p[i].runs=p[i+1].runs;
//			p[i].wickets=p[i+1].wickets;
//			p[i].N_match=p[i+1].N_match;
		
		}
		if(flag==1)
		{	
			p[i+1]=p[i+2];
//			p[i+1].jno=p[i+2].jno;
//			strcpy(p[i+1].name,p[i+2].name);
//			p[i+1].runs=p[i+2].runs;
//			p[i+1].wickets=p[i+2].wickets;
//			p[i+1].N_match=p[i+2].N_match;
			//break;
			
		}
	}
	if(flag==0)
		printf("player not found\n");
		
		else if(flag==1)
		{
			printf("Successfully deleted players\n");
			n=n-1;
		}
	display(p);
	//printf("%d",count);
	
	
}
void MaximumRuns(players* p)
{
	int i,index;

	int max =0;
	for(i=0;i<n;i++)
	{
		if(max<p[i].runs)
		{
			max=p[i].runs;
			index=i;
		}
	}
	printf("\njersey number :%d\nname:%s\nRuns:%d\nwickets:%d\nNumber of matches:%d\n\n",p[index].jno,p[index].name,p[index].runs,p[index].wickets,p[index].N_match);
	
}
void MaximumWickets(players* p)
{
	int i,index;
	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<p[i].wickets)
		{
			max=p[i].wickets;
			 index=i;
		}
	}
	printf("\njersey Number:%d\nName:%s\nRuns:%d\nWickets:%d\nNumber of matches:%d\n",p[index].jno,p[index].name,p[index].runs,p[index].wickets,p[index].N_match);
	

}
void TopThreePlayersRuns(players*p)
{
	int i,index;
	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<p[i].runs)
		{
			max=p[i].runs;
			index=i;
		}
	}
		printf("\njersey number :%d\nname:%s\nRuns:%d\nwickets:%d\nNumber of matches:%d\n\n\n",p[index].jno,p[index].name,p[index].runs,p[index].wickets,p[index].N_match);
	int max2=0;
	for(i=0;i<n;i++)
	{
		if(max2<p[i].runs&&p[i].runs!=max)
		{
			max2=p[i].runs;
			index=i;
		}
	}
		printf("\njersey number :%d\nname:%s\nRuns:%d\nwickets:%d\nNumber of matches:%d\n\n\n",p[index].jno,p[index].name,p[index].runs,p[index].wickets,p[index].N_match);
	int max3=0;
	for(i=0;i<n;i++)
	{
		if(max3<p[i].runs&&p[i].runs!=max2&&p[i].runs!=max)
		{
			max3=p[i].runs;
			index=i;
		}
	}
		printf("jersey number :%d\nname:%s\nRuns:%d\nwickets:%d\nNumber of matches:%d\n\n\n",p[index].jno,p[index].name,p[index].runs,p[index].wickets,p[index].N_match);	
}


void TopThreePlayersWickets(players*p)
{
	int i,index;
	int max=0;
	for(i=0;i<n;i++)
	{
		if(max<p[i].wickets)
		{
			max=p[i].wickets;
			index=i;
		}
	}
		printf("\njersey Number:%d\nName:%s\nRuns:%d\nWickets:%d\nNumber of matches:%d\n",p[index].jno,p[index].name,p[index].runs,p[index].wickets,p[index].N_match);
	int max2=0;
	for(i=0;i<n;i++)
	{
		if(max2<p[i].wickets&&p[i].wickets!=max)
		{
			max2=p[i].wickets;
			index=i;
		}
	}
		printf("\njersey Number:%d\nName:%s\nRuns:%d\nWickets:%d\nNumber of matches:%d\n",p[index].jno,p[index].name,p[index].runs,p[index].wickets,p[index].N_match);
		int max3=0;
	for(i=0;i<n;i++)
	{
		if(max3<p[i].wickets&&p[i].wickets!=max2&&p[i].wickets!=max)
		{
			max3=p[i].wickets;
			index=i;
		}
	}
		printf("\njersey Number:%d\nName:%s\nRuns:%d\nWickets:%d\nNumber of matches:%d\n",p[index].jno,p[index].name,p[index].runs,p[index].wickets,p[index].N_match);
	
}
