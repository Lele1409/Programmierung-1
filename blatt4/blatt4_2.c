#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 1, y = 2;
    bool z = true;
    printf("x%d y%d z%s\n", x, y, z ? "True" : "False");


    //y++*5+x;
    //    (y++)
    //  ((     *5)
    // (          +x)
    (((y++)*5)+x);
    printf("x%d y%d z%s\n", x, y, z ? "True" : "False");

    //x*5%++y;
    //        (++y)
    //  (x*5)
    // (     %     )
    ((y*5%(y++)));
    printf("x%d y%d z%s\n", x, y, z ? "True" : "False");

    //x++-y--;
    //  (x++)
    //        (y--)
    // (     -     )
    ((x++)-(y--));
    printf("x%d y%d z%s\n", x, y, z ? "True" : "False");

    //x*5<y||z&&x>y;
    //   (x*5)
    //  (     <y)
    //                 (x>y)
    //             (z&&     )
    // (         ||          )
    ((x*5)<y)||(z&&(x>y));
    printf("x%d y%d z%s\n", x, y, z ? "True" : "False");

    //x=y=y+1;
    //       (y+1)
    //    (y=     )
    // (x=         )
    (x=(y=(y+1)));
    printf("x%d y%d z%s\n", x, y, z ? "True" : "False");
}
