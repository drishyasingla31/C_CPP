#include <stdio.h>

int main() {
    int n;
    printf("1.neural network\n2. gradient descent\n3.stochastic descent\n4.epoch\n5.backward propagation\n");
    printf("what do you want to know about?: ");
    scanf("%d",&n);
    
    switch(n){
        case 1:
        printf("A layered system that finds patterns in data like a digital brain\n");
        break;
        case 2:
        printf("An algorithm that minimizes error by sliding down the 'slope' of mistakes\n");
        break;
        case 3:
        printf("A faster version that updates weights using random small bits of data\n");
        break;
        case 4:
        printf("One complete pass through your entire training dataset\n");
        break;
        case 5:
        printf("The process of sending error back through the network to fix mistakes\n");
        break;
        default:
        printf("error, try again\n");
    }
    return 0;
}