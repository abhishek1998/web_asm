#include<stdio.h>
int counter = 100;


int count() {
	counter += 100;
	return counter;
}

int main() {
    int arr[counter];
	printf("%d \n",count());
    for(int i=0; i < counter; i++) {
        arr[i] = 2 * counter % 1001;
    }

    for(int i=0; i < counter; i++) {
        printf("%d \n",arr[i]);
    }
	return 0;
}
