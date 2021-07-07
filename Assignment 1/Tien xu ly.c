#include<stdio.h>

typedef struct mydata_type
{
    int a;
    int b;
} mydata_t;

#define SUM
#define CAL 1

int func1(mydata_t *mydata);
int func2(mydata_t *mydata);
int main()
{
    mydata_t mydata;
    mydata.a=10;
    mydata.b=5;
    printf("Gia tri la:%d\n",func1(&mydata));
    printf("Gia tri la:%d",func2(&mydata));
    return 0;
}

int func1(mydata_t *mydata)
{
    #ifndef SUM
        return (mydata->a)+(mydata->b);
    #else
        return (mydata->a)+(mydata->b);
    #endif // SUM
}

int func2(mydata_t *mydata)
{
    #if CAL==1
        return (mydata->a)+(mydata->b);
    #elif CAL==2
        return (mydata->a)-(mydata->b);
    #elif CAL==3
        return (mydata->a)*(mydata->b);
    #else
        return (mydata->a)/(mydata->b);
    #endif // CAL
}
