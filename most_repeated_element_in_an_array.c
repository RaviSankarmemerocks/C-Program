#include<stdio.h>
void main(){




	int a[]={6,8,6,8,6,8,8,6};



	int count=0;
	int flag=0;
	int pos=0;
	int n=sizeof(a)/sizeof(int);
	int ans;



	for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){


       		if(a[i]==a[j]){
                count=count+1;
                
       		}

       }

      if(count>flag){
      	flag=count;
      	ans=a[i];


      }else if(count==flag){
      	flag=count;
      	if(ans<a[i]){
      		ans=a[i];
      	}
      }
      
      count=0;


	}
	printf("%d repeated %d no of times in the array,which is mosted repeated element in the array\n",ans,flag );
}
