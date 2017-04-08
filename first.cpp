
#include "windows.h"
#include "stdio.h"
#include "extra.cpp"

struct vector2 {
    float x;
    float y;        
};

// foobar
static float
foobar (int a) {
    return 0.1;
}

static void
print(vector2 v) {
    printf("x %f, y %f\n", v.x, v.y);
}

int main (int argc, char** argv) {
    
    printf("Hello, world!\n");

    for (int bar = 5; bar < 11; bar++) {
        printf("bar = %d\n", bar);
    }

    vector2 v;
    v.x = 23;
    v.y = v.x * 1.2;
    print(v);

    foo();
    
    printf("Done\n");
    
    return 0;
}
