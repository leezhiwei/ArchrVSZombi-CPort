#include <stdio.h>
void drawfield(char f[5][2][7][5]){
	char letters[1][5] = { 'A','B','C','D','E' };
	// letter list
	printf("\t");
	for (int x = 1; x <= 3; x++) {
		printf("%-7d", x);
	}
	printf("\n");
	for (int x = 0; x < 4; x++) {
		printf("\t");
		for (int x = 0; x < 4; x++) {
			printf("+-----");
		}
		printf("+\n");
		printf(letters[x]);
	}
}
int main() {
	int gamevars[8] = { 0,20,0,0,10,0,10,1 };
	// turn, kill_target, killed, monstinfield, gold, threat, max_threat, dangerlvl
	char deflist[5][5] = { "ARCHR","WALL","MINE" };
	// defender list (names)
	char deffname[5][10] = { "Archer","Wall","Mine" };
	// defender full name
	int defrvar[5][5] = { {5,1,4,5}, {20,0,0,3}, {1,0,0,8} };
	// defender vars (maxHP,min_damage,max_damage,priceingold)
	char monlist[5][5] = { "ZOMBI","WWOLF","SKELE" };
	// monster list (names)
	char monfname[5][10] = { "Zombie","Werewolf","Skeleton" };
	// monster full name
	int monrvar[5][5] = { {15,3,6,1,2}, {10,1,4,2,3}, {10,1,3,1,4} };
	// monster vars (maxHP,min_damage,max_damage,moves,rewardingold)
	char field[5][2][7][5];
	// field declaration
	drawfield(field);
}
