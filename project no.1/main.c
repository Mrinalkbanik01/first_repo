#include <stdio.h>

int main()
{
   int n,k,l,m;
   printf("Enter the value of rows above central starlklkslks");
   scanf("%d",&n);
   m=((2*n)+1);
   char arr[m][m];
   for (k=0;k<=(m-1);k++)
   {
       for (l=0;l<=(m-1);l++)
       {
           if (k == l)
            arr[k][l]='*';
           else if (k +l==(m-1))
            arr[k][l]='*';

           else  arr[k][l]=32;
       }
   }
   for (k=0;k<=(m-1);k++)
   {
       for (l=0;l<=(m-1);l++)
       {

            printf("%c",arr[k][l]);

   }
   printf("\n");
}
}
