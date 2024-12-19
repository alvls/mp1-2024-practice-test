#include <stdio.h>
char* task3(int N)
{
    int leng=0,cl=N;
    while(cl!=0){
        cl=cl/10;
        leng++;
    }
    cl=N;
    char h;
    char* c = (char*)malloc(leng * sizeof(char));
    for(int i=leng-1;i>=0;i--){
        h=(cl%10)+'0';
        c[i]=h;
        cl=cl/10;
    }
    return c;
}
