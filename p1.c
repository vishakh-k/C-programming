#include <stdio.h>
int main(){
    printf("Hello world \n");
    int a=5;
    // printf("a & b %d\n",a&b);
    // printf("a | b %d\n",a|b);
    // printf("a ^ b %d\n",a^b);
    // printf("~a %d\n",~a); 
    // printf("leftshift %d\n",b<<1);   
    // printf("rightshift %d\n",a>>2);
    //int b=a++ + a++ + a + a++ + a++ + a;
    //printf("increment post %d\n",b);
    // int b=++a + a++ + --a + ++a + a-- + a++;
    
    int b1=++a;
    int b2=a++;
    int b3=--a;
    int b4=++a;
    int b5=a--;
    int b6=a++;
    int b=b1+b2+b3+b4+b5+b6;
    printf("increment pre %d\n",b); 
    return 0;
}

//leftshift  
//rightshift
//increment pre and post
//