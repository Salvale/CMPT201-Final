#include<stdio.h>
#include<curses.h>

int main(void) {
	initscr();
	printw("a");
	move(5,10);
	printw("b");
	WINDOW *win = newwin(20,20,20,20);
	refresh();
	box(win,'|','_');
	wrefresh(win);
	mvwprintw(win,1,1,"printing\n");
	wrefresh(win);
	getch();
	endwin();
}
