#include <stdlib.h>
#include <stdio.h>

struct _retire_info {
  int start;
  int months;
  double contribution;
  double rate_of_return;
  double balance;
};
typedef struct _retire_info retire_info;

void retirement (int startAge, //in months
		 double initial, //initial savings in dollars
		 retire_info working, //info about
		 retire_info retired) //info about being retired
{
  printf("helo");
}

double savings(retire_info r){
int i; 
 for (i = r.start + 1; (i <= r.months); i++){
   //if (i < r.months) {
    r.balance = (r.balance * r.rate_of_return) + r.balance + r.contribution;
    printf ("Age %3d month %2d you have $%.2lf\n", i/12, i%12, r.balance);
    //  }
    //    else {
    //  return r.balance;
    //}
  }
  return 0;
}

  int main (void) {
    retire_info working;
    retire_info retired;

    working.start = 327;
    working.months = 816;
    working.contribution = 1000;
    working.rate_of_return = .045/12; //% per month
    working.balance = 21345;
    printf ("Age %3d month %2d you have $%.2lf\n", working.start/12, working.start%12, working.balance);
    savings(working);

    retired.start = working.months;
    retired.months = 1199;
    retired.contribution = -4000;
    retired.rate_of_return = .01/12; //% per month
    retired.balance = 1529340.571;
    //    printf ("Age %3d month %2d you have $%.2lf\n", retired.start/12, retired.start%12, retired.balance);
    savings(retired);

    return EXIT_SUCCESS;
  }
