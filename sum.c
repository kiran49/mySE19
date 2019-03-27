//Author@Saikiran
//Description : this program is for sum of numbers and displaying the output
#include <stdio.h>
main()
{
  //intilisation of varaibles
  int i,Num,Sum = 0;
  //taking numbers from user
  printf("please enter the value of the number:\n");
  scanf("%d",&Num);
  //display numbers
  printf("the value of number is :%d\n",Num);
  //calculations
  for(i=1;i <=  Num; i++)
    Sum +=i;
  //display output
  printf("the sum of numbers from 1 to Num = %d is Sum= %d\n",Num,Sum);

  return 0;
}// end of main
