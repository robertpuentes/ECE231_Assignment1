#include <stdio.h>
#include <math.h>

double calcsum(int arr[], int size){
        double sum = 0;
        for (int i=0; i<size; i++){
            sum += arr[i];
        }
        return sum;
}

double calcaverage (int arr[], int size){
        double sum = calcsum(arr, size);
        return sum / size;

}

double calcSTD(int arr[], int size){
        double avg = calcaverage(arr, size);
        double sumsquares = 0;
        for (int i=0; i<size; i++){
                sumsquares += pow(arr[i] - avg, 2);
        }
        return sqrt(sumsquares/size);
}

int main(){
    int i;
    int array1[] = {10,20,30,40,50};
    int size1 = sizeof(array1)/sizeof (array1[0]);
    int array2[] = {1,3,5,7,9,11,13,15};
    int size2 = sizeof(array2)/sizeof (array2[0]);
    int array3[] = {10, 100, 1000, 10000};
    int size3 = sizeof(array3)/sizeof (array3[0]);
    
    printf("For Array 1:\n");
    printf("The sum is: %.2f\n", calcsum(array1, size1));
    printf("The average is: %.2f\n", calcaverage(array1, size1));
    printf("The std is: %.2f\n\n", calcSTD(array1, size1));
    
    printf("For Array 2:\n");
    printf("The sum is: %.2f\n", calcsum(array2, size2));
    printf("The average is: %.2f\n", calcaverage(array2, size2));
    printf("The std is: %.2f\n\n", calcSTD(array2, size2));

    printf("For Array 3:\n");
    printf("The sum is: %.2f\n", calcsum(array3, size3));
    printf("The average is: %.2f\n", calcaverage(array3, size3));
    return 0;
}

