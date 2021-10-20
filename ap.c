#include <stdio.h>

int an(int a, int d, int n) {
   return (a + (n - 1) * d);
}

int main() {
    
   int a = 4;
   int n = 5;
   int d = 1;
   printf("%d ",an(a,d,n));
   return 0;
}

