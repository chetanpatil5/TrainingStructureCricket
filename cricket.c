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
int main()
{
		//struct Player p;
		struct Team t[2];
		//for(int i=0;i<2;i++)
		//{
			accept(&t[0]);
		//}
			display(&t[0]);


	return 0;
}

void accept(Team *tarr)
{
	printf("\nEnter the team_id:");
	scanf("%d",&tarr->team_id);

	printf("\nEnter the name of the player:");
	scanf("%s",tarr->p[0].player_name);
}	

void display(Team *tarr)
{
	printf("\nTeam Id : %d",tarr->team_id);
	printf("\nName of the Player : %s",tarr->p[0].player_name);
}
