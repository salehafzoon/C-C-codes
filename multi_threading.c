#include <stdio.h>

// int* sequential_adder(int a[], int b[],int size){
//     int c[size] ={};
//     for (int i=0;i<size;i++){
//         c[i] = a[i]+b[i];
//     }
//     return c;
// }

int main(int argc , char **argv){
    // // int a[4] = { 0 };
    // int a[4] = { [0 ... 3 ] = 3 };
    // int b[] = {2,2,2,2};
    
    // for(int i=0;i < (sizeof (a) /sizeof (a[0]));i++)
    //     printf("%d",a[i]);
    
    // // int* c = sequential_adder(a,b,sizeof(a));

    printf("argc:%d\n",argc);
    printf("program name :%s\n",argv[0]);
    
    for (int i = 1; i < argc; ++i) {
        printf("%s",argv[i]);
    }
    
    int x = 10;
    int* p = x;
    printf("\n p = %d",p);
    printf("*p = %d",*p);
    
    return 0;
}

// diffrence between pointer and refrence

// int main(int argc, char **argv) { /* ... */ }
// Argv[0] is the name of the program 