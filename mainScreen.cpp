#include <ncurses/ncurses.h>

int main()
{
    initscr();
    keypad(stdscr, TRUE);
    curs_set(0);
    noecho();

    mvprintw(0, 0, "Hello World!");
    mvprintw(1, 0, "Nice weather, yeah?");
    getch();
    endwin();
    return 0;
}