#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h> 
#include<time.h> 
#include<string.h> 
#include "input.h"
#include "scoresheet.h"
#include "output.h" 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void delay(int  milliseconds);

void gotoxy(short x,short y) {
COORD pos = {x, y};
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}



void main() {
    int A,B,C,D;
	system("color f4");
    int option,i,k;
	puts("                                  KIPM GIDA GORAKHPUR                   \n");
	puts("  ----------------------------------- MINI PROJECT -------------------------------------");
	//menu view
    puts("\t\t\t====================CRICKET SCORE SYSTEM====================");
    puts("\t\t\t1--- NEW MATCH ");
    puts("\t\t\t2--- PREVIOUS MATCH DETAILS");
    puts("\t\t\t3--- MODIFICATION OF DATA");
	puts("\t\t\t4--- EXIT");
	scanf(" %d",&option);	
	switch(option)
	   {
	   	case 1:
			 start();
		     rt_sc();
		     scoresheet(); 
		     break;
			   
		case 2:
			scoresheetr();
			nwmtch();
			break;
		case 3:
			puts("enter admin password");
			scanf("%d%d%d%d",&A,&B,&C,&D);
			if(A==2&&B==3&&C==1&&D==4)
			{
			nwmtch();
			start();
		    }
		    break;
		case 4:
		    break;
		default:
		    break; 
	   }
	 
	getch();
		
	} 
void delay(int milliseconds) 
{
    long pause;
    clock_t now,then;

    pause = milliseconds*(CLOCKS_PER_SEC/1000);
    now = then = clock();
    while( (now-then) < pause )
        now = clock();
}
