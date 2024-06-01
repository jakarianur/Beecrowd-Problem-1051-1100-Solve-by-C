#include <stdio.h>
int main(){
    double sal;
    scanf("%lf", &sal);
    if(sal <= 2000.00){
        printf("Isento\n");
    }else if (sal >= 2000.01 && sal <= 3000.00){
          printf("R$ %.2f\n", (sal - 2000.00)*0.08);
    }else if (sal >= 3000.01 && sal <= 4500.00){
          printf("R$ %.2f\n", ((sal - 3000.00)*0.18 + 1000.00*0.08));
    }else if (sal >= 4500.01){
          printf("R$ %.2f\n", ((sal - 4500.00)*0.28 + 1500.00*0.18 + 1000.00*0.08));
    }
    return 0; }
