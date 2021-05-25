#include <stdio.h>

int main(void) {
		int x,y,z,k,l,m,n,p;
    printf("Answer all the question in neumeric\n");
    printf("Enter day\n");
        scanf("%d",&x);
    printf("Enter month\n");
        scanf("%d",&y);
    printf("Enter year\n");
        scanf("%d",&z);
            
            if(y==1)
            {
              p=0;  
            }
            if(y==2)
            {
                p=3;
            }
            if(y==3)
            {
                p=3;
            }
            if(y==4)
            {
                p=6;
            }
            if(y==5)
            {
                p=1;
            }
            if(y==6)
            {
                p=4;
            }
            if(y==7)
            {
                p=6;
            }
            if(y==8)
            {
                p=2;
            }
            if(y==9)
            {
                p=5;
            }
            if(y==10)
            {
                p=0;
            }
            if(y==11)
            {
                p=3;
            }
            if(y==12)
            {
                p=5;
            }
            l=z-1900;
                m=l/4;
                    k=x+p+l+m;
                        n=k%7;

                 if(n==0)
                    printf("the day is SUNDAY ");
                 if(n==1)
                    printf("the day is MONDAY");
                 if(n==2)
                    printf("the day is TUESDAY");
                 if(n==3)
                    printf("the day is WEDNESDAY");
                 if(n==4)
                    printf("the day is THUSDAY");
                 if(n==5)
                    printf("the day is FRIDAY");
                 if(n==6)
                    printf("the day is SATURDAY");
  
	return 0;
}
