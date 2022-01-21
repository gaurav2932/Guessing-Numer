#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
        int count=0;
        int num; 
        int guess;
        int arr[100],i=0;

        srand(time(0));
        num = rand()%100 +1;
        // printf("this is number %d\n", num);
        while(guess!=num){
                printf("Guess the number between 1 to 100: ");
                count+=scanf("%d", &guess, "\n");
                if(guess>num){
                        printf("Lower number please\n");
                }
                else if(guess<num){
                        printf("Higher number please\n");
                }
                // else{
                //         printf("You guessed it in %d attempts\n", count);
                // }
                arr[i++]=guess;
        }

        printf("\nTotal Number of Time (including 0) are: %d\n",count);
                
        printf("Entered numbers are:\n");
        for(i=0; i<count; i++){
        printf("%d ",arr[i]);
        }

        printf("\n");
    return 0;       
}