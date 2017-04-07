
#include "windows.h"
#include "stdio.h"

int main (int argc, char** argv) {

    printf("Hello, world!\n");

    for (int foo = 3; foo < 8; foo++) {
        printf("foo = %d\n", foo);
    }

    printf("Done\n");
    
    return 0;
}
