#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

struct param_t {
    int number;
    int result;
};

int fact(int n)
{
    if (n >= 1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
   
    scanf("%d", &param.number);
    pthread_create(&thread, NULL, thread_func, &param);
    pthread_join(thread, NULL);
    printf("Factorial of Number is = %d", param.result);
    return 0;
}
