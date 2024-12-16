#include <ncurses/ncurses.h>
#include "signature.cpp"

int main()
{
    initscr();
    curs_set(0);
    noecho();

    int y = (LINES / 2) - 9, x = (COLS / 2) - 35;

    printSign(y,x);

    getch();
    endwin();
    return 0;
}