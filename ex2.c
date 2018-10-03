#include <stdio.h>

int main()
{
    int N;
    printf("Enter size: ");
    scanf("%d", &N);
    int * arr;
    arr = (int*) malloc(N * sizeof(int));
    int x;
    
    for(x = 0; x < N; x++){
        arr[x] = x;
    }
    
    for(x = 0; x < N; x++){
        printf("%d\n", arr[x]);
    }
    
    free(arr);
    return 0;
}

