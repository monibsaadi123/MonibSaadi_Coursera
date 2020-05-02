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
 * @file Header file for a C program 
 * @brief The following file contains function declarations which will be used to perform
 *        to perform several statistical analysis on an array
 * <Add Extended Description Here>
 *
 * @author Monib Saadi
 * @date 5/2/2020
 */
 
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */
void print_statistics(unsigned char *array);
/**
 * @breif A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * @param <int *array> <pointer to given array>
 * @return It returns nothing just print statistics on screen
 */
void print_array(unsigned char *array,int length);
float find_median(unsigned char *array,int length);
#endif /* __STATS_H__ */
