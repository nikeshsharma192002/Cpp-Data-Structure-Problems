#include<stdio.h>
struct student{
    char *name;
};
void main(){
    struct student s[2],r[2];
    s[1]=s[0]="Hacker";
    printf("%s",s[0].name);

}