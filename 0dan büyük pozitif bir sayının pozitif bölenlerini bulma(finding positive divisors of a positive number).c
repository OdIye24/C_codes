#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   while(1){
   printf("\nenter an integer which is greater than 0(enter -1 to exit)\n");
   printf("\n0dan buyuk bir sayi girin(programdan çıkmak için -1e basin)\n");
   scanf("%d",&x);
   for(int a=1;a<=x;a++){
    if(x%a==0){
        printf("%d ",a);
      }
   }if(x==-1){
   break;
   }
   }
   return 0;
}
