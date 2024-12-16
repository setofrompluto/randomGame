#include <ncurses/ncurses.h>
#include <windows.h>

void K(int y, int x)
{
    const char *Kk[] = {
        ",--.-.,-.",
        "/==/- |\\  \\",
        "|==|_ `/_ /",
        "|==| ,   /",
        "|==|-  .|",
        "|==| _ , \\",
        "/==/  '\\  |",
        "\\==\\ /\\=\\.'",
        " `--`"};

    mvprintw(y, x, Kk[0]);
    mvprintw(y + 1, x, Kk[1]);
    mvprintw(y + 2, x, Kk[2]);
    mvprintw(y + 3, x, Kk[3]);
    mvprintw(y + 4, x, Kk[4]);
    mvprintw(y + 5, x, Kk[5]);
    mvprintw(y + 6, x, Kk[6]);
    mvprintw(y + 7, x, Kk[7]);
    mvprintw(y + 8, x, Kk[8]);
}

void A(int y, int x)
{
    const char *Aa[] = {
        "   ,---.",
        " .--.'  \\",
        " \\==\\-//\\ \\",
        " /==/-|_\\ |",
        " \\==\\,   - \\",
        " /==/ -   ,|",
        "/==/-  /\\ - \\",
        "\\==\\ _.\\=\\.-'",
        " `--`"};

    mvprintw(y, x + 17, Aa[0]);
    mvprintw(y + 1, x + 17, Aa[1]);
    mvprintw(y + 2, x + 17, Aa[2]);
    mvprintw(y + 3, x + 17, Aa[3]);
    mvprintw(y + 4, x + 17, Aa[4]);
    mvprintw(y + 5, x + 17, Aa[5]);
    mvprintw(y + 6, x + 17, Aa[6]);
    mvprintw(y + 7, x + 17, Aa[7]);
    mvprintw(y + 8, x + 17, Aa[8]);
}

void J(int y, int x)
{
    const char *Jj[] = {
        "     ,--.-,",
        "     |==' -|",
        "     |==|- |",
        "    _|==|, |",
        ",--.-'\\=|- |",
        "|==|- |=/ ,|",
        "|==|. /=| -|",
        " \\==\\, `-' /",
        "  `--`----' "};

    mvprintw(y, x + 36, Jj[0]);
    mvprintw(y + 1, x + 36, Jj[1]);
    mvprintw(y + 2, x + 36, Jj[2]);
    mvprintw(y + 3, x + 36, Jj[3]);
    mvprintw(y + 4, x + 36, Jj[4]);
    mvprintw(y + 5, x + 36, Jj[5]);
    mvprintw(y + 6, x + 36, Jj[6]);
    mvprintw(y + 7, x + 36, Jj[7]);
    mvprintw(y + 8, x + 36, Jj[8]);
}

void E(int y, int x)
{
    const char *Ee[] =
        {
            "     ,----.  ",
            "  ,-.--` , \\,",
            " |==|-  _.-`",
            " |==|   `.-. ",
            "/==/_ ,    /",
            "|==|    .-' ",
            "|==|_  ,`-._",
            "/==/ ,     /",
            "`--`-----`` "};

    mvprintw(y, x + 54, Ee[0]);
    mvprintw(y + 1, x + 54, Ee[1]);
    mvprintw(y + 2, x + 54, Ee[2]);
    mvprintw(y + 3, x + 54, Ee[3]);
    mvprintw(y + 4, x + 54, Ee[4]);
    mvprintw(y + 5, x + 54, Ee[5]);
    mvprintw(y + 6, x + 54, Ee[6]);
    mvprintw(y + 7, x + 54, Ee[7]);
    mvprintw(y + 8, x + 54, Ee[8]);
}

void printSign(int y, int x)
{
    K(y, x);
    A(y, x);
    J(y, x);
    E(y, x);
    mvprintw(y + 9, x, "           I n    r a n d o m n e s s   w e   t r u s t");
}
