#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

char background [10]= {'o','1','2','3','4','5','6','7','8','9'};

void giaoDien();
void playGame();
int xetDieuKienThangThua();

int main(){
	int lua_chon;
	system("color 4E");

		system("cls");
		printf("\n\n\n\t\t\t\t\t\tGAME TIC TAC TOE\n\n\t\t\t\t\t\t1.BAT DAU\n\t\t\t\t\t\t2.THOAT\n\n");
		printf("\t\t\t\t\t\tNhap lua chon:  ");
		scanf("%d",&lua_chon);
		
			switch (lua_chon){
				case 1:
					system("cls");
					playGame();
					break;
				case 2:
					exit(0);	
			}

		
	return 0;
}

// Ham giao dien game
void giaoDien(){
	system("cls");
	system("color 4E");
	printf("\n\n\n\n\n\t\t\t\t\t\t   TIC TAC TOE\n\n");
    printf("\t\t\t\t\t    Play 1 (X)  -  Play 2 (O)\n\n\n");
    printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %c  |  %c  |  %c \n", background[1], background[2], background[3]);
    printf("\t\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %c  |  %c  |  %c \n", background[4],background[5],background[6]);
    printf("\t\t\t\t\t\t_____|_____|_____\n");
    printf("\t\t\t\t\t\t     |     |     \n");
    printf("\t\t\t\t\t\t  %c  |  %c  |  %c \n", background[7], background[8], background[9]);
    printf("\t\t\t\t\t\t     |     |     \n\n");
}


void playGame(){
	int Play=1,i,o_chon;
	char X_O;

	do{
		giaoDien ();
		
		Play=(Play % 2) ? 1 : 2; 
		printf("\n\t\t\t\t\t\t  Nguoi choi %d: ",Play);
		scanf("%d",&o_chon);
		
		X_O=(Play==1) ? 'X':'O';
		
		if(o_chon == 1 && background[1] =='1')
		background[1] = X_O;
		
		else if(o_chon == 2 && background[2] == '2')
		background[2] = X_O;
		
		else if(o_chon ==3 && background[3] == '3')
		background[3] = X_O;
		
		else if(o_chon == 4 && background[4] == '4') 
		background[4] = X_O;
		
		else if(o_chon== 5 && background[5] =='5')
		background [5] = X_O;
		
		else if(o_chon == 6 && background[6] == '6')
		background [6] = X_O;
		
		else if(o_chon == 7 && background[7] == '7')
		background [7] = X_O;
		
		else if(o_chon == 8 && background[8] == '8')
		background [8] = X_O;
		
		else if(o_chon == 9 && background[9] == '9')
		background [9] = X_O;
		
		else {
			printf("\n\t\t\t\t\t  O nay da duoc nhap hoac khong co\n");
			Play--;
			getch();
		}
		i=xetDieuKienThangThua();
		Play++;
	}while(i == (-1));
		giaoDien();
		if(i==1){
			printf("\n\t\t\t\t\t\t  Play %d win!!!",--Play);
		}
		else{
			printf("\n\t\t\t\t\t\t  Game hoa!!!");
		}
		getch();
}

 // Ham xet dieu kien de thang 
int xetDieuKienThangThua(){
	if (background[1]== background [2] && background [2]==background[3])
		return 1;
	
	else if (background [4]==background [5]&& background [5]==background [6])
		return 1;
		
	else if(background [7]==background [8]&& background [8]==background [9])
		return 1;
	
	else if(background [1]==background [4] && background [4]==background[7])
		return 1;
	
	else if (background[2]==background[5]&&background [5]==background[8])
		return 1;
	
	else if(background[3]==background[6]&&background [6]==background[9])
		return 1;
	
	else if(background[1]==background[5]&&background[5]==background[9])
		return 1;
	
	else if(background[3]==background[5]&&background[5]==background[7])
		return 1;
	
	else if(background[1]!='1'&&background [2]!='2'&& background[3]!='3'&&background[4]!='4'
	&&background[5]!='5'&&background[6]!='6'&&background[7]!='7'&&background[8]!='8'&&background[9]!=9)
		return 0;
	
	else {
		return -1;
	}
}
