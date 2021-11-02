
#include <stdio.h>
#include <stdlib.h>

void print_array(int a[], int n) {
for (size_t i = 0; i < n; i++) {
printf("%d\n", a[i] );
}
}

int main(int argc, char const *argv[]) {
int array[] = {1,2,3,4,5,6,7,8};
print_array(array, 8);


}
