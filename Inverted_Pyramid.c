#include<stdio.h>
int main()
{
    int n,row,col,spc;
    scanf("%d",&n);
    for(row=n;row>=1;row--)
    {
        for(spc=1;spc<=n-row;spc++)
        {
            printf(" ");
        }
        for(col=1;col<=row*2-1;col++)
        {
           printf("*"); 
        }
        
    
        printf("\n");
    }
    
    
    
    
    
}