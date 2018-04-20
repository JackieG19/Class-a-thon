#include <stdio.h>
#include <cs50.h>
#include <math.h>

int sumPrime(num)
{
    int input = get_int();
    for (int n <= num; n++)
    {
        printf("inter");
        printf(" %d\n", n);
        if (int primes(n))
        {
            printf("is prime\n");
            total += n;
            printf("loop\n");
        }
    }
    return total;

}

int main(void) {
    sumPrimes(10);

    return 0;
}

// function isPrimes(num){
//   for(var n = 2; n < num; n++){
//     if(num % n === 0){
//       return false; //not prime numbers
//     }
//   }
//   return true;
// }
// function sumPrimes(num) {
//   var total = 0;
//   for(var n = 2; n <= num; n++){
//     console.log("inter", n);
//     if(isPrimes(n)){
//       console.log("is prime");
//       total += n;  // total = total + n
//       console.log("loop");
//     }
//   } //repeat the process
//   return total;
// }

// sumPrimes(10);