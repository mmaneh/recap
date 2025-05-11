#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum {
    INTEGER,
    FLOAT,
    STRING
}Type;

typedef union {
    int intVal;
    float floatVal;
    char string[100];
}Value;

typedef struct {
    Type type;
    Value value;
    char name[50];
}Data;

Data createDataObject() {
    Data data;

    
    printf("Enter the type: ");
    scanf("%d", &data.type);
    
    if (data.type == INTEGER) {
        printf("Enter an integer: ");
        scanf("%d", &data.value.intVal);
        printf("Enter the name: ");
        scanf("%s", data.name);
    } else if (data.type == FLOAT) {
        printf("Enter a float: ");
        scanf("%f", &data.value.floatVal);
        printf("Enter the name: ");
        scanf("%s", data.name);
    } else if (data.type == STRING) {
        printf("Enter a string: ");
        scanf("%s", data.value.string);
        printf("Enter the name: ");
        scanf("%s", data.name);
    }

    return data;
}

void printDataObject(Data data) {
    printf("Data name%s\n", data.name);

    if (data.type == INTEGER) {
        printf("integer %d\n", data.value.intVal);
    } else if (data.type == FLOAT) {
        printf("float %f\n", data.value.floatVal);
    } else if (data.type == STRING) {
        printf(" %s\n", data.value.string);
    }
}

int main() {
    Data data = createDataObject();
    printDataObject(data);

    return 0;
}

