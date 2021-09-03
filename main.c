# include "stdio.h"
# include "Pointer.h"

int main(){
    int a=2;
    int b[2]={2,2};
    int c[4][2]={{1,2},{3,4},{5,6},{7,8}};
    what_is_pointer(&a);
    printf("----\n");
    what_is_1D_array_name(b);
    printf("----\n");
    what_is_2D_array_name(c);
}