/**
 * 
 *  Author : Syed Hassam Jan
 *  Date   : 10/22/23
 * 
 * 
 * This is a series of excercises to introduce loop 
 * control structures.
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include <math.h>

int main(int argc,char **argv){

    if(argc !=2){

        fprintf(stderr,"Usage : %s n\n",argv[0])    ;
        exit(1);
    }

 int n=atoi(argv[1]);

//  task 1

 int i;
 while (i<20){
    printf("%d",i);
    i+=3;
 }
printf("\n");
}
 