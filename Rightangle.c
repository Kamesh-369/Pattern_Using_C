#include<stdio.h>
int main()
{
    int n,row,col,odd,even;

    scanf("%d",&n);
    
    for(row=1;row<=n;row++)
    {
        odd=1;
        even=2;
        for(col=1;col<=row;col++)
        {
            if(row%2!=0)
            {
                printf("%d",odd);
                odd=odd+2;
             
            }
            else
            {
                printf("%d",even);
                even=even+2;
                
            }
            
            
            
            
            
        }
        printf("\n");
    }
}