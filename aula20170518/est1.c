l#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define SOMA(pa, pb, pr)({ \
    pr.x=pa.x+pb.x;\
    pr.y=pa.y+pb.y;\
                          })

#define DISTANCIA(pa, pb)(sqrt(pow ((pa.x-pb.x), 2)+pow ((pa.y-pb.y), 2)))

struct Pnt {
    float x;
    float y;
};

main (){
    struct Pnt p1, p2, p3;
    scanf ("%f %f %f %f", &p1.x, &p1.y, &p2.x, &p2.y);
    printf ("com o printf (%f, %f)\n", p1.x+p2.x, p1.y+p2.y);
    SOMA(p1, p2, p3);
    printf ("usando macro (%f, %f)\n", p3.x, p3.y);
    printf ("%f\n",DISTANCIA(p1, p2));

}
