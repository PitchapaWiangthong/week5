#include<stdio.h> 
int main() {
    unsigned int x;
    scanf_s("%ud", &x);
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < x; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}