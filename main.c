#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    
    printf("Сколько чисел?\n");
    int kolichesvo;
    scanf("%d", &kolichesvo);

    unsigned long int *multitude1, *multitude2, *multitude3;
    multitude1 = calloc(kolichesvo, sizeof(unsigned long int));
    multitude2 = calloc(kolichesvo, sizeof(unsigned long int));
    multitude3 = calloc(kolichesvo, sizeof(unsigned long int));

    
    int i,j,temp;
    for(i=0;i<kolichesvo;i++){
        scanf("%lu", &multitude1[i]);
        multitude2[i] = multitude1[i];
    }
    
    for(i=0;i<kolichesvo;i++){
        j=0;
        while(multitude2[i] != 0){
            if(multitude2[i]%10 > 0){
                temp = pow(2,j);
                multitude3[i] = multitude3[i] + temp;
            }
            multitude2[i] /= 10;
            j++;
        }
    }
    
    for(i=0;i<kolichesvo;i++){
        printf("%lu : %lu\n",multitude1[i], multitude3[i]);
    }
    
    return 0;
}

