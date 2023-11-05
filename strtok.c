//strtok() visit@  https://www.youtube.com/watch?v=34DnZ2ewyZo
#include<stdio.h>
#include<string.h>
void main(){
    char string[] = "Lets Understand the strtok() function in this programm";
    char *str_tocken = strtok(string, " ");
    while(str_tocken !=NULL){ 
        printf("%s\n", str_tocken);
        str_tocken=strtok(NULL, " "); //returns the next tocken
    }
    return 0;
}
