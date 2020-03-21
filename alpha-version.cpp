#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void function_Addition();
void function_Difference();
void function_Transpose();
void function_MultiplConst();
void function_Multiplication();
void function_rank();

int main()
{
    int num_func;
    printf("Введіть номер функції, яку ви хочете реалізувати над матрицею(матрицями)\n");
    printf("1. Додавання\n2. Віднімання\n3. Транспонування\n4. Множення на число\n5. Множення між собою\n6. Детермінант матриці\n");
    scanf("%i", &num_func);
    switch(num_func){
        case 1: function_Addition();break;
        case 2: function_Difference();break;
        case 3: function_Transpose();break;
        case 4: function_MultiplConst();break;
        case 5: function_Multiplication();break;
        case 6: function_rank();break;
        default: printf("Цифри тільки 1 - 6");
    }

    return 0;
}

void function_Addition(){
    
    int A_matrix[3][3], B_matrix[3][3], add_matrix[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &A_matrix[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &B_matrix[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            add_matrix[i][j] = A_matrix[i][j] + B_matrix[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", add_matrix[i][j]);
        }
        printf("\n");
    }
    
}

void function_Difference(){
    
    int A_matrix[3][3], B_matrix[3][3], dif_matrix[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &A_matrix[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &B_matrix[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            dif_matrix[i][j] = A_matrix[i][j] - B_matrix[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", dif_matrix[i][j]);
        }
        printf("\n");
    }
    
}

void function_Transpose(){

    int matrix[3][3], tran_matrix[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &matrix[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tran_matrix[i][j] = matrix[j][i];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", tran_matrix[i][j]);
        }
        printf("\n");
    }
    
}

function_MultiplConst(){
    int digit, matrix[3][3];
    printf("Число, на яке треба домножити\n");
    scanf("%i", &digit);
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &matrix[i][j]);
            matrix[i][j] *= digit;
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", matrix[i][j]);
        }
        printf("\n");
    }
    
}
void function_Multiplication(){
   
    int A_matrix[3][3], B_matrix[3][3], mult_matrix[3][3];
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &A_matrix[i][j]);
        }
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &B_matrix[i][j]);
        }
    }
    
    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            for(int count = 0; count < 3; count++){
                sum += A_matrix[i][count]*B_matrix[count][j];
            }
            mult_matrix[i][j] = sum;
            sum = 0;
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", mult_matrix[i][j]);
        }
        printf("\n");
    }
    
}

void function_rank(){
    
    int matrix[3][3], rank;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%i", &matrix[i][j]);
        }
    } 
    
    int count = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            matrix[i+1][j] = matrix[i][j] * matrix[count+1][count] - matrix[i+1][j] * matrix[count][count];
        }
        
    }
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%i ", matrix[i][j]);
        } 
    printf("\n");
    }
}
