#include <stdio.h>
void main () {
 long n,digit,temp,new=0;
 int pow=1;
 n = 637206380746;
 for (digit=0;digit<=9;digit++){
   for(temp=n;temp>0;temp/=10){
     
     if (temp%10>0&&temp%10==digit){
     
      new=new*10+digit;

  }if(temp%10==digit&&temp%10==0){
  	printf("%ld",digit);
    pow=pow*10;

  }
  
 
}
}
digit=0;
temp=0;
 //printf("\n");
 printf("%ld\n",new);

while(new>0){

	temp=new%10;
	if(temp%2==0){
    digit=digit*10+temp;
    
}
new=new/10;
}
printf("%ld\n", (digit*pow));
}
 


