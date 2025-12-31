#include<stdio.h>

int main(){
        printf("Right half triangle:\n\n");
        for(int r=41;r<=45;r++)
        {
                for(int f=41;f<=r;f++)
                {
                        printf("%d ",f);
                }
                printf("\n");
        }

        printf("\n");
        printf("\n");

        printf("Floyd's triangle pattern:\n\n");
        int n=11;
        for(int a=1;a<=4;a++) 
        {  
                for(int b=1;b<=a;b++)
        {
                printf("%d ",n);
                n++;
        }
        printf("\n");
        }   

        printf("\n");
        printf("\n");


        printf("Left half triangle:\n\n");
        for(int y=5;y>=1;y--)
        {
            for(int h=1;h<=y-1;h++)
            {
                printf("  ");
            }
            for(int k=y;k<=5;k++)
            {
                printf("%d ",k);
            }
                printf("\n");
        }

        printf("\n");
        printf("\n");


        printf("Inverted left half triangle:\n\n");
        for(int b=5;b>=1;b--)
        {
                for(int n=5;n>b;n--)
                {
                        printf("  ");
                }
                        for(int m=1;m<=b;m++)
                        {
                                if(m%2==1)
                                {
                                printf("1 ");
                                }
                                else
                                {
                                printf("0 ");
                                }
                        }
                        printf("\n");
        }

        printf("\n");
        printf("\n");

        printf("Full pyramid:\n\n");
        int c,w,e,t=5;
        for( c=t;c>=1;c--)
        {
                for(w=1;w<c;w++)
                {
                        printf("  ");
                }
                for(e=c;e<=t;e++)
                {
                        printf("%d ",e);
                }
                for(e=t-1;e>=c;e--)
                {
                        printf("%d ",e);
                }
                printf("\n");
        }

        printf("\n");
        printf("\n");


        printf("Custom numeric pattern:\n\n");
        int u,q,o=5;
        for( u=1;u<=o;u++)
        {
                for(q=1;q<=u;q++)
                {
                        printf("%d ",q);
                }
                for(q=u;q<o;q++)
                {
                        printf("    ");
                }
                for(q=u;q>=1;q--)
                {
                        printf("%d ",q);
                }
                printf("\n");
        }

        printf("\n");
        printf("\n");

        
        printf("Letter P pattern:\n\n");

        int i, j;
        int height = 5;
        for (i = 0; i < height; i++)
        {
                printf("* ");
                for (j = 0; j < height; j++) 
                {
                        if ((i == 0 || i == height / 2)
                        && j < height - 1)
                        printf("* ");
                else if (i < height / 2
                        && j == height - 1 && i != 0)
                        printf("  * ");
                else
                        printf(" ");
                }
                printf("\n");
        }
}



