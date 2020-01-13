#include<stdio.h>

struct Player 
{
		char player_name[20];
		char player_skill[15];
		int runs;
		int wickets;
		int jersey_no;
		int avg_runs;
		int economy;
};

struct Team
{
	int team_id;
	int wins;
	int loose;
	int team_runs;
	int team_wickets;
	Player p[3];
};

void accept(Team *tarr);
void display(Team *tarr);
void playmatch(Team *tarr);
int main()
{
		//struct Player p;
		struct Team t[2];
		for(int i=0;i<2;i++)
		{
			accept(&t[i]);

		}
			for(int i=0;i<2;i++)
			{
				display(&t[i]);
			}
			


	return 0;
}

void accept(Team *tarr)
{
	printf("\nEnter the team_id :");
	scanf("%d",&tarr->team_id);

	printf("\nEnter the name of the players of this team:");
	for(int i=0;i<3;i++)
	{
		printf("\nName : ");
		scanf("%s",tarr->p[i].player_name);

		printf("\nSkill : ");
		scanf("%s",tarr->p[i].player_skill);
		printf("\n\n--------------------------------\n");
	}
	
	
}	

void display(Team *tarr)
{
	printf("\n\n====================================================================");
	printf("\nTeam Id : %d",tarr->team_id);
	for(int i=0;i<3;i++)
	{
		printf("\nName of the Player : %s",tarr->p[i].player_name);
		printf("\t Skill : %s",tarr->p[i].player_skill);
	}
	printf("\n");
	
}

void playmatch(Team *tarr)
{
	
	int over[5][6];
	int k=0;
	for(int j=0;j<5;j++)
	{
		for(int i=0;i<6;i++)
		{
			over[j][i]=rand()%8;


			if(over[j][i]==7)
			{
				//wicket
				over[j][i]=-1;
				k++;

			}
			
			if(k<3)
			{
				tarr->p[k].runs=tarr->p[k].runs+over[j][i];	//first initialise the runs to zero
				//also check whether k < 3 as 3 players are taken 
				tarr->team_runs=tarr->team_runs+tarr->p[k].runs; //team runs
			}
			else
			{
				return;
			}

		}
	}
	
}