#include <stdio.h>
#include <curses.h> // Make sure to include the -lncurses flag

const int SIZE = 8;
const int LEN = SIZE * SIZE;

int main(void) {    
    int map[LEN];
    
    for(int i = 0; i < LEN; i++) {
        if(i == LEN / 2 + SIZE / 2) {
            map[i] = 1;
        } else {
            map[i] = 0;
        }
    }

    while(1) {
        initscr();

        addstr("Controls:\n");
        addstr("  wasd - move\n");
        addstr("  x    - exit\n\n");
        
        for(int iy = 0; iy < SIZE; iy++) {
            for(int ix = 0; ix < SIZE; ix++) {
                int cell = map[(iy * SIZE) + ix];
                
                char ch = '.';
                if(cell) ch = 'o';
                
                addstr(&ch);
                addstr(" ");
            }

            addstr("\n");
        }

        char inp = getch();
        
        endwin();

        if(inp == -1) continue;

        switch (inp) {
            case 'x':
                puts("Bye");
                return 0;
        }

        clear();
    }
}
