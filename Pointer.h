//
// Created by Haolian on 2021/9/2.
//
# include <stdio.h>

void swap(int *a , int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

// & 是用来取地址的
// * 是用来取值的
// 在传指针的时候其实是传的地址

void what_is_pointer(int *a){
    printf("the pointer is pointing to address %p\n",a);
    printf("the address of a pointer is %p\n",&a);
    printf("parameter passed in is: %d\n",*a);

}

// 传进来的是一个指针，也就是array name
void what_is_1D_array_name(int *a){
    // a here is the array name
    printf("array name is a pointer:%p\n",a);
    printf("&a[0] is a pointer?%p\n",&a[0]);
    printf("&a[1] is a pointer?%p\n",&a[1]);
    printf("a[0] is a number%d\n",a[0]);
    printf("the function of a [1]=%d is the same as *(a+1):%d\n",a[1],*(a+1));
    printf("array name's value:%d\n",*a);
    printf("array name's address:%p\n",&a);
}

// 这里输入的形参的名字是a, 然后指向的是一个int[2]类型
// 数组就是一个个小格子
void what_is_2D_array_name(int (*a)[2]){
    printf("a is a pointer:%p\n",a);
    printf("the address of array name:%p\n",&a);
    printf("a[0] is also a pointer:%p\n",a[0]); //a[0]变成了数组名
    printf("The address of a[0]:%p\n",&a[0]);
    printf("The value of a[0]:%d\n",*a[0]); // a[0]的值也只是第一个格子
    printf("The value of a[1]:%d\n",*a[1]);
    printf("a+1 is also a pointer %p\n",a+1);
    printf("The address of a[1]:%p\n",&a[1]);



}