A.
#include<stdio.h>
#include<string.h>
int main()
{
    int a[20],b[30],i,j,k,count,n;
    printf("Enter frame size: ");
    scanf("%d",&n);
    printf("Enter the frame in the form of 0 and 1 : ");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    i=0;
    count=1;
    j=0;
    while(i<n)
    {
        if(a[i]==1)
        {
            b[j]=a[i];
            for(k=i+1; a[k]==1 && k<n && count<5; k++)
            {
                j++;
                b[j]=a[k];
                count++;
                if(count==5)
                {
                    j++;
                    b[j]=0;
                }
                i=k;
            }
        }
        else
        {
            b[j]=a[i];
        }
        i++;
        j++;
    }
    printf("After Bit Stuffing : ");
    for(i=0; i<j; i++)
        printf("%d",b[i]);
    printf("\n");
    return 0;
}

B.
//program for character stuffing
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<process.h>
int main()
{
{
int i=0,j=0,n,pos; 
char a[20],b[50],ch;
printf("enter string:\n");
scanf("%s",&a);
n=strlen(a);
printf("enter position\n");
scanf("%d",&pos);
if(pos>n)
{
printf("invalid position,Enter again:");
scanf("%d",&pos);
}
printf("enter the character\n");
ch=getche();
b[0]='d';
b[1]='l';
b[2]='e';
b[3]='s';
b[4]='t';
b[5]='x';
j=6;
while(i<n)
{
if(i==pos-1)
{
b[j]='d';
b[j+1]='l';
b[j+2]='e';
b[j+3]=ch;
b[j+4]='d';
b[j+5]='l';
b[j+6]='e';
j=j+7;
}
if(a[i]=='d'&&a[i+1]=='l'&& a[i+2]=='e')
{
b[j]='d';
b[j+1]='l';
b[j+2]='e';
j=j+3;
}
b[j]=a[i];
i++;
j++;
}
b[j]='d';
b[j+1]='l';
b[j+2]='e';
b[j+3]='e';
b[j+4]='t';
b[j+5]='x';
b[j+6]='\0';
printf("\n frame after stuffing: \n");
printf("%s",b);
getch();
return 0;}}

