#include <stdio.h>
#include <stdlib.h>

int main(){
char str[100]; char str1[100];
int i=0;int k=0;
int a=0;
int m=0;
int b=0;
int f;
int c;
printf("enter the sentence\n");
gets(str);
printf("enter the word \n");
gets(str1);
while(str1[a]!='\0'){
 a++;
 b=a;
}
//printf("%d\n",a);

    while(str[i]!='\0'){

    if(str[i]==' '||'\0'){
             //printf("%d\n",i);
        k=(i-m)-1;
        m=i;
        if(k==b){
               // printf("%d\n",k);
            c=i-k;f=0;
            while(c<i){
                if(str[c]==str1[f]){
                    printf("%d\n",c);
                    printf("%s\n",str[c]);

                }
                c++;f++;
            }
        }
    }
    i++;
    }
}
