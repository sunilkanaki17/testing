/*str contains the name in FirstName<space>MiddleName<Space>Lastname 
format. lastName must return a pointer to the last name name. Example
char *lastName(char *fullname);
main() 
{ 
char *name = “Sachin Ramesh Tendulkar”’;
printf(“Last Name = %s\n”, lastName(name)); 
} 
should print Last Name = Tendulkar */

#include<stdio.h>
char *lastName(char *fullname)
{
    int count=0;
    while (*fullname!='\0')
    {
        if((*fullname)==' ')
        {
            count++;
        }
        if(count==2)
        {
            fullname++;
            break;   
        }
        fullname++;
    }
    return fullname;
}
int main()
{
    char *name = "Sachin Ramesh Tendulkar";
    printf("Last Name = %s\n", lastName(name));
}
