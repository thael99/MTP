#include <stdio.h>

struct num {
    int quo;
    int res;
};

void func (struct num * S){
    int a=(* S).quo;
    int b=(* S).res;
    (* S).quo=a/b;
    (* S).res=a%b;
}

main (){
    struct num A;
    scanf ("%d %d",&A.quo, &A.res);
    func (&A);
    printf ("quociente eh %d e o resto eh %d", A.quo, A.res);
}
