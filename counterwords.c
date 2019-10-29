#include <stdio.h>
int main(){
    char str[255];
    int i, count = 0, flag = 0;   //счетчик слов и переменная-флаг
    gets(str);
    for (i=0; str[i]!='\0'; i++)
        if ((str[i] != ' ') && (flag == 0)){
            count ++;
            flag = 1;   //флаг показывает, внутри или вне слова мы находимся
        }else
        if (str[i] == ' '){
            flag = 0;
        }
    printf("%i", count);
}
