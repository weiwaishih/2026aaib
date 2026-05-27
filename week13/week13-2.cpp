///week13-2.cpp 肈: local vs. global
# include <stdio.h>
int a = 100, b = 200;///global办跑计
void fun1()
{
    int b = 80;///local跋办跑计
    printf("void funl() a is: %d\n", a);
    printf("void funl() b is: %d\n", b);
}
void fun2()
{
    b = 30; ///эglobal 办跑计 跑30
}
int main()
{
    int a = 50;///local跋办跑计
    printf("int main() a is: %d\n", a);
    printf("int main() b is: %d\n", b);
    fun1();
    fun2();
    printf("int main() a is: %d\n", a);
    printf("int main() b is: %d\n", b);
}
