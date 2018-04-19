#include <stdio.h>
#include <cs50.h>


int sumFibs(int num)
{
    int prevNum = 0;
    int currNum = 0;
    int  total = 0;
    while (currNum <= num)

    if (currNum %2 !=0)
    {
        total += currNum;
        currNum += prevNum;
        prevNum = currNum - prevNum;
    }
    else
    {
        currNum += prevNum;
        prevNum = currNum - prevNum;
    }
    printf("%i\n");
    return total;
}

int main(void)
{
    int num;
    if (argc ==2)
    {
    input = atoi(argv[1]);
    sumFibs(num);
    }
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