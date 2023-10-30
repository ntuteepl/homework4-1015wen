#include <stdio.h>
#include<stdbool.h>
#include<assert.h>
#define aa 50

int main()
{
    int a,c;
    scanf("%d",&c);
    assert(c>=1&&c<=50);
    bool prime[aa];
    
    for(int j=0;j<c;j++)
    {
        
    scanf("%d",&a);
    for(int i=2;i*i<=a;i++)
    {
    
        if(a%i==0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    }
    }
    

    return 0;
}
