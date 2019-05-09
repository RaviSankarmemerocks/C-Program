#include<stdio.h>
void main(){





	int a[]={23,54,67,87,90};


	int n=sizeof(a)/sizeof(int);
    
   int rev;

	for(int i=0;i<n;i++){


		if(i%2!=0){



			
            rev=0;
			while(a[i]!=0){

				int no=a[i]%10;
				rev=rev*10+no;
				a[i]=a[i]/10;


			}
          a[i]=rev;
          printf("%d\n",a[i]);

		}else{
			printf("%d\n",a[i] );
		}
		
		
	}
	
}
