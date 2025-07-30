#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
    int guess, random;
    int count = 0;
    printf("Welcome to the number guessing game.\n");
    random = rand() % 100 + 1;
    do {
        printf("Please enter guess between (1-100) : ");
        scanf("%d", &guess);
        count++;
        if(guess < random) {
            printf("Please enter a larger number.\n");
        }
        else if(guess > random) {
            printf("Please enter a smaller number.\n");
        }
        else {
            printf("Congratulations you have successfully guessed the correct number in %d tries.\n", count);
        }
    }while (guess != random);
    printf("Thank you so much for playing my game mr sarthak.\n");
    printf("Developed by : Yours truly neighbourhood Aman");
    return 0;
}