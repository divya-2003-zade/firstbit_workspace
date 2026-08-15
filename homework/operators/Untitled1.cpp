#include<stdio.h>
int main() {
    int fun1();
    int fun2();
}
void fun1() {
    printf("hello ");
    int fun2();
}
void fun2() {
fun1();
    printf("bye ");
}
