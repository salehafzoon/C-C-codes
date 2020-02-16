#include <stdio.h>

//for  malloc/calloc/free/realloc
#include <stdlib.h>

void print_input(int argc , char **argv){
    
    printf("argc:%d\n",argc);
    printf("program name :%s\n",argv[0]);
    
    for (int i = 1; i < argc; ++i) {
        printf("%s",argv[i]);
    }   
    return;
}

int ** init_matrix(int size,int const_val){

    int ** matrix;
    matrix = (int **) malloc(size * sizeof(int));
    for (int i =0;i<size;i++){
        matrix[i] = (int *) malloc(size * sizeof(int));
    }
    for (int i =0;i<size;i++){
        for (int j = 0; j < size; j++)
        {
            matrix[i][j] = const_val;
        }
    }
    return matrix;
}

double get_average_sequential(int** matrix , int size){
    int sum;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            sum += matrix[i][j];
        }
    }
    
    return (double)sum/size;
}

int main(int argc , char **argv){

    // print_input(argc ,argv);
    // // int a[4] = { 0 };
    // int a[4] = { [0 ... 3 ] = 3 };
    // int b[] = {2,2,2,2};
    
    // for(int i=0;i < (sizeof (a) /sizeof (a[0]));i++)
    //     printf("%d",a[i]);
    
    // // int* c = sequential_adder(a,b,sizeof(a));

    //get average
    int size = atoi(argv[1]);
    // printf(argv[1]);
    printf("%d",size);

    int ** matrix_a = init_matrix(size,10);
    int ** matrix_b = init_matrix(size,20);

    int sum = 0;
     for (int i =0;i<size;i++){
        for (int j = 0; j < size; j++)
            sum += matrix_a[i][j];
    }
    printf("%d",sum);
    
    return 0;
}

// diffrence between pointer and refrence

// int main(int argc, char **argv) { /* ... */ }
// Argv[0] is the name of the program 

// if(ptr)     /* succeeds if p is not null */