#include <stdio.h>
#include <stdlib.h>

void addElement(int* arry, int start, int count){
    for(int i = 0; i < count; i++){
        printf("Please enter element #%d: ", start + i + 1);
        scanf("%d", &arry[start + i]);
    }
}

void selection_sort(int* arry, int n){
    int i, j, min, temp;
    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(arry[j] < arry[min]){
                min = j;
            }
        }
        if(min != i){
            temp = arry[i];
            arry[i] = arry[min];
            arry[min] = temp;
        }
    }
}

void printArray(int* arry, int n){
    printf("Array elements:\n");
    for(int i = 0; i < n; i++){
        printf("%d\t", arry[i]);
    }
    printf("\n");
}

int main(){
    int n, a, *arry;
    int choose;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    arry = (int*)malloc(n * sizeof(int));
    if(arry == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }

    addElement(arry, 0, n);
    selection_sort(arry, n);
    printArray(arry, n);

    printf("Do you want to add more elements?\n");
    printf("1. Yes\n");
    printf("2. No\n");
    scanf("%d", &choose);

    if(choose == 1){
        printf("How many elements to add? ");
        scanf("%d", &a);

        int* temp = realloc(arry, (n + a) * sizeof(int));
        if(temp == NULL){
            printf("Memory reallocation failed.\n");
            free(arry);
            return 1;
        }

        arry = temp;  // realloc başarılıysa geri ata
        addElement(arry, n, a);  // sadece yeni elemanları gir
        n = n + a; // toplam eleman sayısını güncelle
        selection_sort(arry, n);
        printArray(arry, n);
    } else {
        printf("Final sorted array:\n");
        printArray(arry, n);
        printf("Goodbye.\n");
    }

    free(arry);  // EN SONDA
    return 0;
}
