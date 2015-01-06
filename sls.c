#include <ncurses.h>
#include <string.h>
#include <stdio.h>
#include <rand.h>
#include <time.h>

int main() {
	int width, height;
	initscr();
	getmaxyx(stdscr, height, width);
	move(height/2, width/2 - strlen("Hello World !!!")/2);
	printw("Hello World !!!");
	refresh();
	getch();
	endwin();

	return 0;
}

#define MAX_LINE_LENGTH

char **rocket;
int charmid;

void loadrocket() {
	FILE *rin = fopen("rocket.txt", "r");
}

int main() {
	//loadrocket();

	srand(time(NULL));

	int width, height;
	initscr();
	getmaxyx(stdscr, height, width);


}

