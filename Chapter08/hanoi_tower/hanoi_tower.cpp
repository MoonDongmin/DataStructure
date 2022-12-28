#include "stdio.h"

void hanoi_tower(int n, char from, char temp, char to){
    if(n==1){
        printf_s("place 1 %c from %c\n",from, to);
    }
    else{
        hanoi_tower(n-1,from,to,temp);
        printf_s("place %i is %c from %c\n",n,from,to);
        hanoi_tower(n-1, temp, from, to);
    }
}

int main(){
    char from = 'A';
    char temp =  'B';
    char to ='C';

    hanoi_tower(4,from,temp,to);

    return 0;
}
