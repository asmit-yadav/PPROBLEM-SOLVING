#include <stdio.h>
#include <string.h>
int count(char str[]);
int count(char str[])
{
    int counntss = 0;
    int i=0;
    //for (int i = 0; str[i] != '\0'; i++)
    while(str[i]!='\0')
    {
        counntss++;
        i++;
    }
    return counntss;
}
void main()
{
    char str[] = {'a', 's', 'm', 'i', 't', ' ', '\0'};
    // printf("%d",strlen(str));
    //char str;
    //printf("%s", str);
    // int count=0;
    int l = count(str);
    printf("%d", l);
    // for(int i=0;str[i]!='\0';i++)
    // printf("%c",str[i]);
    // count++;
    // printf("%d",count);
}