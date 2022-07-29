//Tic-Tac-Toe
#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"  
char arr[]={'1','2','3','4','5','6','7','8','9'};
int ar[]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
//function to display 
void Display(){
    printf("Tic-Tac-Toe\n");
    printf(" %c | %c | %c \n",arr[0],arr[1],arr[2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n",arr[3],arr[4],arr[5]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n",arr[6],arr[7],arr[8]);
}
int main(){
bool a = true;
while(a == true){
    int x,y,a=1;
    char o;
    system("cls");
    Display();
    while(a<10){
        labelx:
        if(a%2!=0){
        printf("player 1 choose the coordinate to place x ('0' to Exit): ");
        scanf("%d",&x);
    
        switch(x){
        case 1: if(ar[0]==-1){
                arr[0] = 'x';
                ar[0]=1;break;}
                else{printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 2: if(ar[1]==-1){
                arr[1] = 'x';
                ar[1]=1;break;}
                else{printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 3: if(ar[2]==-1){
                arr[2] = 'x';
                ar[2]=1;break;}
                else{printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 4: if(ar[3]==-1){
                arr[3] = 'x';
                ar[3]=1;break;}
                else{ printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 5: if(ar[4]==-1){
                arr[4] = 'x';
                ar[4]=1;break;}
                else{printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 6: if(ar[5]==-1){
                arr[5] = 'x';
                ar[5]=1;break;}
                else{printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 7: if(ar[6]==-1){
                arr[6] = 'x';
                ar[6]=1;break;}
                 else{printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 8: if(ar[7]==-1){
                arr[7] = 'x';
                ar[7]=1;break;}
                else{printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 9: if(ar[8]==-1){
                arr[8] = 'x';
                ar[8]=1;break;}
                else{printf("already chosen! choose something else.\n");
                        goto labelx;}
        case 0: goto end;
                break;
        default:printf("pls enter a valid place!\t");
                   goto labelx; 
        }
        system("cls");
        Display();
    }
        labely:
        if(a%2==0){ 
        printf("player 2 choose the coordinate to place y ('0' to Exit): ");
        scanf("%d",&y);

        switch(y){
        case 1: if(ar[0]==-1){
                arr[0] = 'y';
                ar[0] = 0;break;}
                else{printf("already chosen! choose something else.\n");
                     goto labely;}       
        case 2: if(ar[1]==-1){
                arr[1] = 'y';
                ar[1] = 0;break;}
                else{printf("already chosen! choose something else.\n");
                     goto labely;}
        case 3: if(ar[2]==-1){
                arr[2] = 'y';
                ar[2] = 0;break;}
                else{printf("already chosen! choose something else.\n");
                     goto labely;}
        case 4: if(ar[3]==-1){
                arr[3] = 'y';
                ar[3] = 0;break;}
                 else{printf("already chosen! choose something else.\n");
                     goto labely;}
        case 5: if(ar[4]==-1){
                arr[4] = 'y';
                ar[4] = 0;break;}
                else{printf("already chosen! choose something else.\n");
                     goto labely;}
        case 6: if(ar[5]==-1){
                arr[5] = 'y';
                ar[5] = 0;break;}
                else{printf("already chosen! choose something else.\n");
                     goto labely;}
        case 7: if(ar[6]==-1){
                arr[6] = 'y';
                ar[6] = 0;break;}
                else{printf("already chosen! choose something else.\n");
                     goto labely;}
        case 8: if(ar[7]==-1){
                arr[7] = 'y';
                ar[7] = 0;break;}
                else{printf("already chosen! choose something else.\n");
                     goto labely;}
        case 9: if(ar[8]==-1){
                arr[8] = 'y';
                ar[8] = 0;break;}
                else{printf("already chosen! choose something else.\n");
                     goto labely;}
        case 0: goto end;
                break;
        default:printf("pls enter a valid place!\t");
                    goto labely;
        }
        system("cls");
        Display();
    }
a++;
//the game will end if (Logic)
        if(ar[0]==1 && ar[1]==1 && ar[2]==1)
            {printf("player 1 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[3]==1 && ar[4]==1 && ar[5]==1)
            {printf("player 1 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[6]==1 && ar[7]==1 && ar[8]==1)
            {printf("player 1 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[0]==1 && ar[3]==1 && ar[6]==1)
            {printf("player 1 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[1]==1 && ar[4]==1 && ar[7]==1)
            {printf("player 1 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[2]==1 && ar[5]==1 && ar[8]==1)
            {printf("player 1 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[0]==1 && ar[4]==1 && ar[8]==1)
            {printf("player 1 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[2]==1 && ar[4]==1 && ar[6]==1)
            {printf("player 1 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[0]==0 && ar[1]==0 && ar[2]==0)
            {printf("player 2 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[3]==0 && ar[4]==0 && ar[5]==0)
            {printf("player 2 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[6]==0 && ar[7]==0 && ar[8]==0)
            {printf("player 2 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[0]==0 && ar[3]==0 && ar[6]==0)
            {printf("player 2 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[1]==0 && ar[4]==0 && ar[7]==0)
            {printf("player 2 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[2]==0 && ar[5]==0 && ar[8]==0)
            {printf("player 2 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[0]==0 && ar[4]==0 && ar[8]==0)
            {printf("player 2 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    else if(ar[2]==0 && ar[4]==0 && ar[6]==0)
            {printf("player 2 has won!!");
            printf("\n/---ENDED---/");
            goto cycle;
            break;}
    } 
end:
printf("/---ENDED---/");
cycle:
printf("\nWanna play Again(y/n):");
scanf("%s",&o);
if(o=='y'){a=true;}
else{a=false;break;}
  }
return 0;
}
