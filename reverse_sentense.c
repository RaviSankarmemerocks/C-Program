#include <stdio.h>
#include<string.h>
int main()
{
 /*   char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);*/
    char name1[1000];
    printf("Enter name: ");
    fgets(name1,100000,stdin);     // read string
    //printf("Name: ");
    //puts(name1);    // display string
    int temp=strlen(name1)-1;//sizeof(name1)/sizeof(char);
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
