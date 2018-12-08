# C-Program
//Competitive problem solving using C language
//generating lucky number using 3 or 4 or 3 and 3
//3,4,33,34,43,44,333,343,434,444,.....................

#include <stdio.h>

int main()
{
    int n;
    int a[100];
    scanf("%d",&n);
    a[0]=3;
    a[1]=4;
    for(int i=2;i<n-1;i++)
    {
        a[i]=a[i-2]*10+a[i-i];//0*10+0//33
        int j=i+1;//3
        a[j]=a[i-2]*10+a[j-i];//1*10+1//34
        int k=j+1;//4
        a[k]=a[j-2]*10+a[i-i];//43
        int l=k+1;//5
        a[l]=a[j-2]*10+a[j-i];//44
        i=i+3;
        
    
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
        
        
    

    return 0;
}
