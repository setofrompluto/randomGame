#include <ncurses/ncurses.h>

int main()
{
    initscr();
    keypad(stdscr, TRUE);
    curs_set(0);
    noecho();

    mvprintw(0, 0, "Hello World!");
    getch();
    endwin();
    return 0;
}