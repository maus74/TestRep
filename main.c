
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
void f(char* s)
{int i=0;
    for(i=0;i<strlen(s);i++)
    {
        s[i]='T';
    }
    return ;
}


char DATA[3] = "CTF";
int D=100;

int main()
{

    char str[6]="qwer";
    char* s = malloc(sizeof(char)*6);
    f(str);
    for(int i=0;i<6;i++)
    {
        scanf("%c",&s[i]);
    }
    D+=100;
    printf("%s %d %s",str,D,DATA);


    getch();
    return 0;

}