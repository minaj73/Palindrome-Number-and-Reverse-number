#include<stdio.h>
#include<conio.h>
int main()
{

    int no=0,rev=0,temp=0,r=0;
    printf("\n enter number");
    scanf("%d",&no);
    temp=no;
    while(temp>0)
    {
     r=temp%10;
     rev=(rev*10)+r;


     temp=temp/10;
    }
    printf("Reverse of given number %d is = %d",no,rev);


    getch();
    return 0;
}
