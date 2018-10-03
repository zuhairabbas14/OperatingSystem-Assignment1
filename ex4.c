#include <stdlib.h>
#include <stdio.h>

void *reallocate(void *ptr, size_t size){ // OUR OWN REALLOC FUNCTION
    
    void *ptr_new;
    size_t n1;
    n1 = sizeof(ptr);
    if (size <= n1){
        return ptr;
    }
    ptr_new = malloc(size);
    memcpy(ptr_new, ptr, size);
    free(ptr);
    return ptr_new;
}

int main(){
	
	printf("Enter original array size:");
	int n1=0;
	scanf("%d",&n1);

	int *a1 = (int*) malloc(n1 * sizeof(int));
	int i;
	for(i=0; i<n1; i++){
		a1[i] = 100;
		printf("%d ", a1[i] );
	}

	printf("\nEnter new array size: ");
	int n2=0;
	scanf("%d",&n2);
	a1 = reallocate(a1, n2 * sizeof(int));

	if(n2 > n1){
	    int x;
	    for(x = n1; x < n2; x++){
	        a1[x] = 0;
	    }
	}

	for(i=0; i<n2;i++){
		printf("%d ",a1[i]);
	}
	printf("\n");

	return 0;
}
