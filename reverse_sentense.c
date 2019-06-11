#include <stdio.h>

int main()
{

    char name1[1000];
    printf("Enter name: ");
    fgets(name1,100000,stdin);     // read string
    //printf("Name: ");
    //puts(name1);    // display string
int temp=0;
    
    for(int x=0;x<sizeof(name1)/sizeof(char);x++)
    {
    	int ascii=name1[x];
    	if(isalpha(name1[x])||ascii==32){
     
    		temp=temp+1;
    }
    else{
    	break;
    }
    }









    //int temp=strlen(name1)-1;//sizeof(name1)/sizeof(char);
    printf("%d\n",temp);
        for (int i = temp-1; i>=0; i--) {
            if(name1[i]==' '){

                for(int j=i+1;j<=temp-1;j++){
                    printf("%c",name1[j]);
                }
                printf(" ");
                temp=i;

            }


        }
        for(int j=0;j<=temp-1;j++){
            printf("%c",name1[j]);
        }
        printf("\n");
    return 0;
}
