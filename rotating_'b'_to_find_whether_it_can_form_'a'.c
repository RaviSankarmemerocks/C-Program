#include<stdio.h>

void main(){


int a=431;
int b=142;
int temp1=a;
int temp2=b;
int l1=0;
int l2=0;
int flag=0;
int pow=1;


while(temp1!=0||temp2!=0){


	
	if(temp1!=0){
	l1=l1+1;
	temp1=temp1/10;
}
if(temp2!=0){
l2=l2+1;
temp2=temp2/10;
}



}
int l2_1=l2;
//printf("%d--%d\n",l1,l2);
if(l1==l2){
while(l2>1){
  pow=pow*10;


l2--;
}
printf("initial value of a-->%d\n",a);
printf("initial value of b-->%d\n",b);
printf("performing rotations...\n");
while(l2_1>=0){

	if(a==b){
		
		flag=1;

		break;
	}else{
		int no=b%10;
		b=b/10;
		b=no*pow+b;
        flag=0;
		printf("%d\n",b);
	}
	l2_1--;
}
if(flag==1){
	printf("number can be formed \n");
	printf("a-->%d\n",a);
	printf("b-->%d\n",b);
}else{
printf("can't find\n");
}
}else{
	printf("match not found\n");
}
}
