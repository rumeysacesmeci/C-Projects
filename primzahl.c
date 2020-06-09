#include <math.h>
#include <stdio.h>

int is_prime(int num){
    if(num < 2){
        return 0;
    }
    if(num == 2){
        return 1;
    }
    if(num % 2 == 0){
        return 0;
    }
    for(int i = 3 ; i < sqrt(num) ; i = i + 2){
        if(num % i == 0){
            return 0;
        }
    }
    return 1;
}

int calculate_nth_prime_number(int n){
    return -1;
}

int main(void){

    printf("%d\n",is_prime(1));
    printf("%d\n",is_prime(2));
    printf("%d\n",is_prime(3));
    printf("%d\n",is_prime(9));
    printf("%d\n",is_prime(11));

    printf("%d\n",calculate_nth_prime_number(1));
    printf("%d\n",calculate_nth_prime_number(2));
    printf("%d\n",calculate_nth_prime_number(3));
    printf("%d\n",calculate_nth_prime_number(10));

    return 0;
}


