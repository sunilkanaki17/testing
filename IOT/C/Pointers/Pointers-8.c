/*8. Write a function int sameLastName(char *name1, char name2) where str1 and 
str2 contains the name in FirstName<space>MiddleName<Space>Lastname 
format. lastName must return a pointer to the last name. Example
int sameLastName(char *name1, char *name2);
main() 
{ 
char *name1 = “Sachin Ramesh Tendulkar”’;
char *name1 = “Arjun Sachin Tendulkar”’;
if (sameLastName(name1, name2) 
printf(“Last names match\n”); 
 else 
printf(“Last names do not match\n”); 
} 
should print Last names match*/
#include<stdio.h>
int sameLastName(char *name1, char *name2)
{
    int x=0,y=0;
    while (*name1!='\0')
    {
        if(*name1==' ')
        {
            x+=1;
        }
        if(x==2)
        {
            name1++;
            break;
        }
        name1++;
    }
    while (*name2!='\0')
    {
        if(*name2==' ')
        {
            y+=1;
        }
        if(y==2)
        {
            name2++;
            break;
        }
        name2++;
    }
    while(*name1!='\0' && *name2!='\0')
    {
        if(*name1==*name2)
        {
            name1++;
            name2++;
            return 1;
        }
        else{
            return 0;
            break;
        }
    }
}
int main() 
{ 
    char *name1 = "Sachin Ramesh Tendulkar";
    char *name2 = "Arjun Sachin Tendulkar";
    if(sameLastName(name1, name2))
    printf("Last names match\n"); 
    else 
    printf("Last names do not match\n"); 
} 