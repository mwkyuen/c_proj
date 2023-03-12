#include <curses.h>

int main(int argc, char **argv)
{
    initscr();

    // creating a window;
    WINDOW *win = newwin(15, 30, 0, 0);
    refresh();

    // making box border
    box(win, 0, 0);

    // move and print in window
    keypad(win, true);
    curs_set(0);

    // refreshing the window
    wrefresh(win);

    getch();
    endwin();
    return 0;
}
