#include<stdio.h>
int main()
{
    int n,row,col,spc;
    scanf("%d",&n);
    n=n*2-1;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1||row==n||col==1||col==n||row==col||row+col==10)
            {
                printf("*");
            }
           
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}