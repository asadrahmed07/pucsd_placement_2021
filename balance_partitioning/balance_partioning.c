#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(int argc , char *argv[])
{   
    int n = atoi(argv[1]);
    int array[n];
    for(int k= 0; k < n; k++) {
      array[k] = 2*k + 4;      
    }
    int ls = 0 , rs = 0;
    
    int p = n/2;
    
     for(int j = 0 ; j < p-1 ; j++ ) {
            ls = ls + array[j];
        }
        
        for(int k = p ; k < n -1 ; k++) {
        rs = rs + array[k];
        }
        
        
    int ref_diff = rs - ls ;   
    
    int tempdiff = 0;
    
    while(ref_diff > tempdiff) {
         
         for(int j = 0 ; j < p-1 ; j++ ) {
            ls = ls+ array[j];
        }
        
        for(int k = p ; k < n -1 ; k++) {
            rs = rs + array[k];
        }
        
        tempdiff = rs - ls;
        
        if(tempdiff < finaldiff) {
            ref_diff = tempdiff;
        }
        
        p++;
    }
    
    printf("The partition is : = %d" , p+1);


    return 0;
}
