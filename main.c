//
//  main.c
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2569 BE.
//

#include <stdio.h>

int main(int argc, char * argv[]) {
    
 printf("I have %d arguments\n",argc);
 int i,N;
 int *a;
    for(i=1;i<argc;i++){
        //printf("arg %d: %s\n",i,argv[i]);
         printf("%s\n",argv[i]);
         // Convert argv ---> a?
    
         
    }
    
    return 0;
}
