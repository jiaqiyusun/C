#include <stdio.h> //printf必须添加这个图书馆 

int main(){
    printf("1. hello world!\n"); // \n 换行 
    printf("2. hello\bworld!\n"); // \b 减去前面一个字母
    printf("3. hello\rworld!\n"); // \r 回车 将当前位置移到本行开头
    printf("4. hello\tworld!\n"); // \t 跳格

    //特殊如何写出 添加/在
    printf("5. hello \\ world! \n"); // 
    printf("6. hello \' world!\n"); // \'
    printf("7. hello \" world!\n"); // \"
    printf("8. hello \? world!\n"); // \?
}
