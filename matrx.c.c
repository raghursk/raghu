#include <stdio.h>

void Addingoftwoary(int row, int col, int array1[row][col], int array2[row][col], int array3[row][col]) {
    printf("Array 1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf(" %d", array1[i][j]);   // Print array1
        }
        printf("\n");
    }

    printf("Array 2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf(" %d", array2[i][j]); // Print array2
        }
        printf("\n");
    }

    printf("The addition of two arrays is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array3[i][j] = array1[i][j] + array2[i][j]; // Add arrays and store in array3
            printf(" %d", array3[i][j]);
        }
        printf("\n");
    }
    printf("Tranpos matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array3[i][j] = array1[i][j] + array2[i][j]; // Add arrays and store in array3
            printf(" %d", array3[j][i]);
        }
        printf("\n");
    }
}

void multiplicationoftwoarray(int row, int col, int array1[row][col], int array2[row][col], int array3[row][col]) {
    printf("Array 1:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf(" %d", array1[i][j]);// Print array1
        }
        printf("\n");
    }

    printf("Array 2:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf(" %d", array2[i][j]);  // Print array2
        }
        printf("\n");
    }

    printf("The multiplication of two arrays is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array3[i][j] = array1[i][j] * array2[i][j]; // Multiply arrays and store in array3
            printf(" %d", array3[i][j]);
        }
        printf("\n");
    }
    printf("Tranpos matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            array3[i][j] = array1[i][j] * array2[i][j]; // Add arrays and store in array3
            printf(" %d", array3[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int run = 1;
    do {
        int n;
        printf("Enter the operation you want to perform:\n1) Adding two Arrays\n2) Multiply the Arrays\n3) Exit\n");
        scanf("%d", &n);

        int array1[2][2] = {{2, 3}, {4, 5}};
        int array2[2][2] = {{6, 7}, {8, 9}};
        int array3[2][2];

        switch (n) {
            case 1:
                Addingoftwoary(2, 2, array1, array2, array3);
                break;
            case 2:
                multiplicationoftwoarray(2, 2, array1, array2, array3);
                break;
            case 3:
                run = 0;
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    } while (run);

    return 0;
}
