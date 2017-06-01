#include <stdio.h>

struct num {
    int quo;
    int res;
};

struct num func (struct num A, struct num B){
    B.quo=A.quo/A.res;
    B.res=A.quo%A.res;
    return B;
}

main (){
    struct num A, C;
    scanf ("%d %d",&A.quo, &A.res);
    C=func(A, C);
    printf ("quociente eh %d e o resto eh %d", C.quo, C.res);

}
