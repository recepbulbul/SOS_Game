#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int x=0,y=0,xa=0,ya=0,bosyer=9;
    char oyna;
    char tahta[3][3];
    char oyuncu='X';
    char ai= 'O';
    while (1)
    {
        for (int i = 0; i < 3; i++){
            for (int j = 0; j <3; j++){
                tahta[i][j]=' ';
            }
                
        }
        srand(time(NULL));
        while (1)
        {


            
            do
            {
                printf("Satir giriniz: ");
                scanf("%d",&x);
                x--;
                printf("Sutun Giriniz: ");
                scanf("%d",&y);
                printf("-----------------\n");
                y--;

                if(tahta[x][y]==' '){
                    tahta[x][y]=oyuncu;
                    break;
                }
            }while(tahta[x][y]== ' ' || tahta[x][y]==ai);
            
            while (1)
            {
                xa=rand()%3;
                ya=rand()%3;
                if (tahta[xa][ya]==' ')
                {
                    tahta[xa][ya]=ai;
                    break;
                    bosyer--;
                }
                
            }
            printf(" %c | %c | %c\n",tahta[0][0],tahta[0][1],tahta[0][2]);
            printf("-----------\n");
            printf(" %c | %c | %c\n",tahta[1][0],tahta[1][1],tahta[1][2]);
            printf("-----------\n");
            printf(" %c | %c | %c\n",tahta[2][0],tahta[2][1],tahta[2][2]);

            if ((tahta[0][0]== oyuncu && tahta[0][1]== oyuncu && tahta[0][2]==oyuncu) || (tahta[1][0]== oyuncu && tahta[1][1]== oyuncu && tahta[1][2]==oyuncu) || (tahta[2][0]== oyuncu && tahta[2][1]== oyuncu && tahta[2][2]==oyuncu) || (tahta[0][0]== oyuncu && tahta[1][0]== oyuncu && tahta[2][0]==oyuncu) || (tahta[0][1]== oyuncu && tahta[1][1]== oyuncu && tahta[2][1]==oyuncu)|| (tahta[0][2]== oyuncu && tahta[1][2]== oyuncu && tahta[2][2]==oyuncu)||(tahta[0][0]== oyuncu && tahta[1][1]== oyuncu && tahta[2][2]==oyuncu)||(tahta[0][2]== oyuncu && tahta[1][1]== oyuncu && tahta[2][0]==oyuncu))
            {
                printf("Oyun Bitti Kazananin Kim Oldugunu Zaten Biliyoruz Iyi Oyundu Tebrikler\n");
                printf("Tekrar Oynamak Ister Misiniz E/H: ");
                scanf("%c");
                scanf("%c",&oyna);
                if (oyna == 'E')
                {
                    continue;
                }
                else{
                    break;
                }
            }
            if ((tahta[0][0]== ai && tahta[0][1]== ai && tahta[0][2]==ai) || (tahta[1][0]== ai && tahta[1][1]== ai && tahta[1][2]==ai) || (tahta[2][0]== ai && tahta[2][1]== ai && tahta[2][2]==ai) || (tahta[0][0]== ai && tahta[1][0]== ai && tahta[2][0]==ai) || (tahta[0][1]== ai && tahta[1][1]== ai && tahta[2][1]==ai)|| (tahta[0][2]== ai && tahta[1][2]== ai && tahta[2][2]==ai)||(tahta[0][0]== ai && tahta[1][1]== ai && tahta[2][2]==ai)||(tahta[0][2]== ai && tahta[1][1]== ai && tahta[2][0]==ai))
            {
                printf("Oyun Bitti Kazananin Kim Oldugunu Zaten Biliyoruz Iyi Oyundu Tebrikler\n");
                printf("Tekrar Oynamak Ister Misiniz E/H: ");
                scanf("%c");
                scanf("%c",&oyna);
                if (oyna == 'E')
                {
                    continue;
                }
                else{
                    exit(0);
                }
                
            }
            if (bosyer==0)
            {
                printf("Oyun Bitti Kazananini Olmayan Bir oyun Daha :( \n");
                printf("Tekrar Oynamak Ister Misiniz E/H");
                scanf("%c",oyna);
                if (oyna == 'E')
                {
                    continue;
                }
                else{
                    exit(0);
                }
            }
            

        }
    }
    
    
    
    
    return 0;
    

}