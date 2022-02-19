#include <stdio.h>

//int fx(int a, int b, int c, int p){
  //  int fx;
    //fx = a * p * p + b * p + c;

    //return fx;
//}


int main()
{
    int a,b,c,p,fx ;
    printf("Please Enter value od a, b, c and p \n");
    scanf("%d %d %d %d", &a, &b, &c, &p);
    
    fx = a*p*p + b*p + c;
    printf("Value of f(p) is %d", fx);
    
    return 0;
} 
