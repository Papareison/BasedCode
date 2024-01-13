#include <stdio.h>
#include <time.h>
#include <math.h>

float q_rsqrt(float number);

int main(){
  unsigned int i;
  int type;
  float input;
  float placeholder;
  clock_t time_req;
  printf("Type your input.\n");
  scanf("%f", &input);
  printf("Type 0 for normal inverse root, 1 for the fast algorithm\n");
  scanf("%d", &type);
  switch (type){

  case 0:
    time_req = clock();
    printf("Normal: %f\n", 1/sqrt(input)); // 8-0 clocks
    for (i = 0; i < 1000000; i++){
      placeholder = 1/sqrt(input) + (float)i; // + i to avoid optimization from compiler
    }
    time_req = clock() - time_req;
    printf("Clocks taken: %f", (float)time_req);
  break;

  case 1:
    time_req = clock();
    printf("Fast: %f\n", q_rsqrt(input)); // 0 clocks, literally
    for (i = 0; i < 1000000; i++){
      placeholder = q_rsqrt(input) + (float)i; // + i to avoid optimization from compiler
    }
    time_req = clock() - time_req;
    printf("Clocks taken: %f", (float)time_req);
  break;  
  }
  return 0;
}

float q_rsqrt(float number){
  long i;
  float x2, y;
  const float threehalfs = 1.5F;

  x2 = number * 0.5F;
  y  = number;
  i  = * ( long * ) &y;                       // evil floating point bit level hacking
  i  = 0x5f3759df - ( i >> 1 );               // what the fuck?
  y  = * ( float * ) &i;
  y  = y * ( threehalfs - ( x2 * y * y ) );   // 1st iteration
  // y  = y * ( threehalfs - ( x2 * y * y ) );   // 2nd iteration, this can be removed

  return y;
}