/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {
  float mean,median;
  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  print_statistics(test);
  print_array(test,SIZE);
  median = find_median(test,SIZE);
  printf("Median=%2.2f\n",median);
}

void print_statistics(unsigned char *array) {
  unsigned int max,min;
  int total;
  float mean,median;
  min = array[0];
  max = array[0];
  total = max;
  for(int i=1; i < SIZE; i++) {
    total += array[i];
    if(array[i] < min) { 
      min=array[i];
      }
    else if(array[i] > max) {
      max = array[i];
      }
  }
  for(int i=0; i < SIZE-1; i++) {
    for(int j=0; j < SIZE-i-1; j++) {
      if(array[j] > array[j+1]) {
        int temp = array[j];
        array[j] = array[j+1];
        array[j+1] = temp;
      }
    }
  }
  mean = ((float)total)/((float)SIZE);
  median = (float)((array[(SIZE/2)-1]+array[(SIZE/2)])/2);
  printf("Minimum=%d\tMaximum=%d\tMean=%2.2f\tMedian=%2.2f\n",min,max,mean,median);
}
void print_array(unsigned char *array,int length) {
  for(int i =0; i < length; i++)
    printf("%d\n",array[i]); 
}
float find_median(unsigned char *array,int length) {
  if(length%2==0) return (float)((array[(length/2)-1]+array[(length/2)])/2);
  else return array[(length-1)/2];
}
