#include<stdio.h>
#include<string.h>
extern int n;
typedef struct players
{
	int jno;
	char name[20];
	int runs;
	int wickets;
	int N_match;
	
	
}players;

    void storevalue(players*);
	void display(players*);
	void searchName(players*,char*);
	void delet(players*,int);
	void update(players*,int);
	void MaximumWickets(players*);
	void TopThreePlayersRuns(players*);
	void TopThreePlayersWickets(players*);


