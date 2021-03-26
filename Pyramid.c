#include<stdio.h>
int main()
{
    int n,row,col,spc;
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(spc=1;spc<=n-row;spc++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("*");
        }
        
        
        
        
        
    
    printf("\n");
    }
    
    
    
    
    
    
    
    
    
    
    return 0;
}