//Tic-Tac-Toe
#include "stdio.h"
#include "stdlib.h"
char arr[3][3]={'1','2','3','4','5','6','7','8','9'};
int ar[3][3]={-1,-1,-1,-1,-1,-1,-1,-1,-1};

void Display(){
    printf("Tic-Tac-Toe\n");
    printf(" %c | %c | %c \n",arr[0][0],arr[0][1],arr[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n",arr[1][0],arr[1][1],arr[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n",arr[2][0],arr[2][1],arr[2][2]);
}

int main(){
    int x,y,a=1;
    system("cls");
    Display();
    while(a<10){
    labelx:
        if(a%2!=0){
        printf("player 1 choose the coordinate to place x ('0' to Exit): ");
        scanf("%d",&x);
    
        switch(x){
        case 1: if(ar[0][0]==-1){
                arr[0][0] = 'x';
                ar[0][0]=1;
                    break;}
                else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }
        case 2: if(ar[0][1]==-1){
                arr[0][1] = 'x';
                ar[0][1]=1;
                    break;}
                else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }
        case 3: if(ar[0][2]==-1){
                arr[0][2] = 'x';
                ar[0][2]=1;
                    break;}
                else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }
        case 4: if(ar[1][0]==-1){
                arr[1][0] = 'x';
                ar[1][0]=1;
                    break;}
                else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }
        case 5: if(ar[1][1]==-1){
                arr[1][1] = 'x';
                ar[1][1]=1;
                    break;}
                else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }
        case 6: if(ar[1][2]==-1){
                arr[1][2] = 'x';
                ar[1][2]=1;
                    break;}
                else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }
        case 7: if(ar[2][0]==-1){
                arr[2][0] = 'x';
                ar[2][0]=1;
                    break;}
                 else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }
        case 8: if(ar[2][1]==-1){
                arr[2][1] = 'x';
                ar[2][1]=1;
                    break;}
                else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }
        case 9: if(ar[2][2]==-1){
                arr[2][2] = 'x';
                ar[2][2]=1;
                    break;}
                else{
                        printf("already chosen! choose something else.\n");
                        goto labelx;
                }

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
        case 1: if(ar[0][0]==-1){
                arr[0][0] = 'y';
                ar[0][0] = 0;
                    break;
                }
                else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }       
        case 2: if(ar[0][1]==-1){
                arr[0][1] = 'y';
                ar[0][1] = 0;
                    break;}
                else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }
        case 3: if(ar[0][2]==-1){
                arr[0][2] = 'y';
                ar[0][2] = 0;
                    break;}
                else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }
        case 4: if(ar[1][0]==-1){
                arr[1][0] = 'y';
                ar[1][0] = 0;
                    break;}
                 else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }
        case 5: if(ar[1][1]==-1){
                arr[1][1] = 'y';
                ar[1][1] = 0;
                    break;}
                else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }
        case 6: if(ar[1][2]==-1){
                arr[1][2] = 'y';
                ar[1][2] = 0;
                    break;}
                else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }
        case 7: if(ar[2][0]==-1){
                arr[2][0] = 'y';
                ar[2][0] = 0;
                    break;}
                else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }
        case 8: if(ar[2][1]==-1){
                arr[2][1] = 'y';
                ar[2][1] = 0;
                    break;}
                else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }
        case 9: if(ar[2][2]==-1){
                arr[2][2] = 'y';
                ar[2][2] = 0;
                    break;}
                else{
                     printf("already chosen! choose something else.\n");
                     goto labely;   
                }
        case 0: goto end;
                break;

        default:printf("pls enter a valid place!\t");
                    goto labely;
        
        }
        system("cls");
        Display();
    }

a++;

    if(ar[0][0]==1 && ar[0][1]==1 && ar[0][2]==1)
            {printf("player 1 has won!!");
            break;}
    else if(ar[1][0]==1 && ar[1][1]==1 && ar[1][2]==1)
            {printf("player 1 has won!!");
            break;}
    else if(ar[2][0]==1 && ar[2][1]==1 && ar[2][2]==1)
             {printf("player 1 has won!!");
            break;}
    else if(ar[0][0]==1 && ar[1][0]==1 && ar[2][0]==1)
             {printf("player 1 has won!!");
            break;}
    else if(ar[0][1]==1 && ar[1][1]==1 && ar[2][1]==1)
            {printf("player 1 has won!!");
            break;}
    else if(ar[0][2]==1 && ar[1][2]==1 && ar[2][2]==1)
            {printf("player 1 has won!!");
            break;}
    else if(ar[0][0]==1 && ar[1][1]==1 && ar[2][2]==1)
             {printf("player 1 has won!!");
            break;}
    else if(ar[2][0]==1 && ar[1][1]==1 && ar[0][2]==1)
             {printf("player 1 has won!!");
            break;}
    else if(ar[0][0]==0 && ar[0][1]==0 && ar[0][2]==0)
            {printf("player 2 has won!!");
            break;}
    else if(ar[1][0]==0 && ar[1][1]==0 && ar[1][2]==0)
            {printf("player 2 has won!!");
            break;}
    else if(ar[2][0]==0 && ar[2][1]==0 && ar[2][2]==0)
             {printf("player 2 has won!!");
            break;}
    else if(ar[0][0]==0 && ar[1][0]==0 && ar[2][0]==0)
            {printf("player 2 has won!!");
            break;}
    else if(ar[0][1]==0 && ar[1][1]==0 && ar[2][1]==0)
             {printf("player 2 has won!!");
            break;}
    else if(ar[0][2]==0 && ar[1][2]==0 && ar[2][2]==0)
             {printf("player 2 has won!!");
            break;}
    else if(ar[0][0]==0 && ar[1][1]==0 && ar[2][2]==0)
             {printf("player 2 has won!!");
            break;}
    else if(ar[2][0]==0 && ar[1][1]==0 && ar[0][2]==0)
            {printf("player 2 has won!!");
            break;}
    } 
end:
return 0;

}
