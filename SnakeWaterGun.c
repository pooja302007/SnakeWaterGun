#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int SnakeWaterGun(char,char);
int main(){

    char you,computer;
    srand(time(0));
    int num = rand()%100+1;

    if(num<33){
       computer = 's';
    }
    else if(num<66){
        computer = 'w';
    }
    else{
        computer = 'g';
    }

    printf("Enter 's' for snake ,'w' for water,'g' for gun :");
    scanf("%c",&you);

    int result = SnakeWaterGun(you,computer);

    if(result==0){
        printf("Game Drawn!");
    }
    else if(result==1){
        printf("You Win !");
    }
    else{
        printf("You Lose.");
    }
    printf("You chose %c and the computer chose %c",you,computer);
    return 0;
}


int SnakeWaterGun(char you,char computer){

    if(you==computer){
        return 0;
    }
    else if(you=='w'&&computer=='g'||you=='g'&&computer=='s'||you=='s'||computer=='w'){
        return 1;
    }
    else{
        return -1;
    }
}

