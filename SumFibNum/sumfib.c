#include <stdio.h>
#include <cs50.h>


int sumFibs(int num)
{
    int prevNum;
    int currNum = 0;
    int  total = 0;
    while (currNum <= num)
    {
    if (!num)
        total += currNum;
        currNum += prevNum;
        prevNum = currNum - prevNum;
    }
    return total;
    printf("Passed\n");
}
int main(void) {
    sumFibs(4);
    return 0;
}

// function sumFibs(num) {
//   var prevNum = 0;
//   var currNum = 1;
//   var total = 0;
//   while(currNum <= num){//(true){
//     if(currNum % 2 !== 0){
//       total += currNum;
//     }
//     currNum += prevNum;
//     prevNum = currNum - prevNum;
//     }
//   return total;
//   }
// sumFibs(4);