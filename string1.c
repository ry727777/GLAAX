#include<stdio.h>
#include<string.h>
int main(){
   char ch[100]="kjfdf";

   for(int i=0;ch[i]!='\0';i++){
       if(ch[i]<'z' && ch[i]>'a')ch[i]=ch[i]-32;

       printf("%c",ch[i]+32);
   }


}