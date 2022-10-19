#include<stdio.h>

int main (void)

{

//store itch number in a list

int nb;
printf("please unter a big nuber ");
scanf("%i",&nb);

int size = -1;
int i;

for(i=nb;i>0;i=i/10){size++;}
i = 0;

int rest;
int c [size];

while(nb>0)
{

rest=nb%10;
c[i]=rest;
nb=nb/10;
i++;

}

i=size;

do{
printf("%i",c[i]);
i--;
}while(i>-1);

printf("\n");

}
