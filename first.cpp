
#include "windows.h"
#include "stdio.h"

struct vector2 {
    float x;
    float y;        
};

static void
print(vector2 v) {
    printf("x %f, y %f\n", v.x, v.y);
}

int main (int argc, char** argv) {
    
    printf("Hello, world!\n");

    for (int foo = 5; foo < 11; foo++) {
        printf("foo = %d\n", foo);
    }

    vector2 v;
    v.x = 23;
    v.y = v.x * 1.2;
    print(v);
    
    printf("Done\n");
    
    return 0;
}
