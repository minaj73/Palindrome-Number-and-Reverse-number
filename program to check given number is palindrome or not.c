#include<stdio.h>
#include<conio.h>
int main()
{

    int no=0,rev=0,temp=0,r=0;
    printf("\n enter number");
    scanf("%d",&no);

    for( temp=no;temp>0;temp=temp/10)
    {

     rev=(rev*10)+(temp%10);
    }
    if(no==rev)
    {
        printf("\n Given number %d and its reverse %d are equal",no,rev);
        printf("\n So given number is palindrome");
    }
    else
    {
    printf("Given number %d and its reverse %d are not equal",no,rev);
    printf("\n So given number is not palindrome");
    }

    getch();
    return 0;
}
