#include<stdio.h>

void main()
{
	/* code */
	int arr[5][5];
	int no=1;
	int limit=0;
	while(limit<5){
		for (int i=0,j=limit;i<=limit&&limit>=0;i++,j--)
     	{
     	/* code */
     		if(limit%2!=0){
          		arr[i][j]=no;
          		no=no+1;
     		}else{
        		arr[j][i]=no;
        		no=no+1;  
			}
     	}
     	if(limit==5-1){
       int t=1;
       while(t<=limit){
           	for(int x=t,y=limit;x<=(limit)&&y>=t;x++,y--){
             	if(t%2!=0){
          			arr[x][y]=no;
          			no=no+1;
     			}else{
        			arr[y][x]=no;
        			no=no+1;  
				}

           }
           t++;
       	}



       } 

		limit++;

    }
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(arr[i][j]<10){
			printf(" %d " ,arr[i][j]);
		}else{
			printf("%d " ,arr[i][j]);
		}
		}
		printf("\n");
	}
}

