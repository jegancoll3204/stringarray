#include<stdio.h>
/// String Array

int main()
{
    int i;
    char month[][20]={"january","february","march","april","may","june","july","august","septemper","october","november","december"};
    printf("\n\n\n\n");
    printf("==+==+==+==+==+==+==+==+==+==+==+==+==+==+==\n");
    printf("Enter Month :");
    scanf("%d",&i);

    if(i<1 || i>12)
    {
        printf("\nInvalid Number");
    }
    else
    {
        printf("%s\n",month[i-1]);
    }
    printf("==+==+==+==+==+==+==+==+==+==+==+==+==+==+==\n");

}