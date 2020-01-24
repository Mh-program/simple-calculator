/* Calculator
    Author: Mahim Hossain
    Date: 24/01/2020
*/

#include <stdio.h>

int main() {
    
    char opt;
    
    int n1, n2, answer;
    
    printf("Calculator \n \n");
    
    printf("Input 'a' for Addition \n");
    printf("Input 's' for Subtraction \n");
    printf("Input 'm' for Multiplication \n");
    printf("Input 'd' for Division \n");
    
    scanf("%1s", &opt);
    
    switch(opt) {
        
        case 'a': {
            
            printf("Input first number: \n");
            scanf("%d", &n1);
            
            printf("Input second number: \n");
            scanf("%d", &n2);
            flushall();
            
            printf("Calculating..... \n \n");
            
            answer = n1 + n2;
            
            printf("Answer is: %d \n", answer);
            
            printf("Program shutting down....");
            
            break;
            
        }
        
        case 's': {
            
            printf("Input first number: \n");
            scanf("%d", &n1);
            
            printf("Input second number: \n");
            scanf("%d", &n2);
            flushall();
            
            answer = n1 - n2;
            
            printf("Calculating..... \n \n");
            
            printf("Answer is: %d \n", answer);
            
            printf("Program shutting down....");
            
            break;
            
        }
        
        case 'm': {
            
            printf("Input first number: \n");
            scanf("%d", &n1);
            
            printf("Input second number: \n");
            scanf("%d", &n2);
            flushall();
            
            answer = n1 * n2;
            
            printf("Calculating..... \n \n");
            
            printf("Answer is: %d \n", answer);
            
            printf("Program shutting down....");
            
            break;
            
        }
        
        case 'd': {
            
            printf("Input first number: \n");
            scanf("%d", &n1);
            
            printf("Input second number: \n");
            scanf("%d", &n2);
            flushall();
            
            answer = n1 / n2;
            
            printf("Calculating..... \n \n");
            
            printf("Answer is: %f \n", answer);
            
            printf("Program shutting down....");
            
            break;
            
        }
        
        default: {
            
            printf("Invalid option....");
            
        }
        
    }
    
    getchar();
    return 0;
    
}
    