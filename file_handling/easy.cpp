/* start with opening a file and then we will store values in it . we have to print the numbers in the txt file and then rewind to the start of the file
start of the file reached then read it and usig fscanf and then product calculate
*/
int main() {
    FILE *file;
    int numbers[10];
    int count;

    scanf("%d", &count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    file = fopen("sequence.txt", "w+");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    processSequence(file, numbers, count);

    fclose(file);
    return 0;
}
// You are using GCC
// by writing numbers to a file
void processSequence(FILE *file, int *numbers, int count) {
    int product=1;
    int num;
    for(int i=0;i<count;i++){
        fprintf(file,"%d ", numbers[i]);
    }
    rewind(file);
    //now we will start reading the file
    for(int i=0;i<count;i++){
        fscanf(file,"%d", &num);
        product=product*num;
    }
    printf("%d",product);
}
