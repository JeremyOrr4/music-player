#include <ncurses.h>

int main() {
    initscr();            // Start curses mode
    cbreak();             // Disable line buffering
    noecho();             // Don't echo() while we do getch
    keypad(stdscr, TRUE); // Enable function keys
    curs_set(0);          // Hide cursor

    mvprintw(1, 2, "Welcome to my TUI");
    mvprintw(3, 2, "Press 'q' to quit");
    refresh();

    getch();              // Wait for user input

    endwin();             // End curses mode
    return 0;
    }
