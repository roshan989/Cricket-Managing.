	char t1_nm[10],t2_nm[10],cmp[10],venue[30];
    char t1_pl[13][40],t2_pl[13][40];char toss[10],choosed[5];
    int sct[2]; int out[2]; int sum=0;
    int t1_sc[11],t2_sc[11];
    int t1_bl[8],t2_bl[8];
    int over;

void nwmtch()
{

{
  system("cls");
  gotoxy(1,10);
  puts("=======================================================================");
  gotoxy(1,12);
  printf("||  COMPITITON -%s    ",cmp);
  gotoxy(32,12);
  printf("||  VENUE -%s    ",venue);
  gotoxy(1,14);
  printf("||  TEAM 1 -%s    ",t1_nm);
  gotoxy(32,14);
  printf("||  TEAM 2 -%s    ",t2_nm);
  gotoxy(1,16);
  printf("||  TOSS WINNER-%s    ",toss);
  gotoxy(32,16);
  printf("||  CHOOSED-%s    ",choosed); 
  gotoxy(1,18);
  printf("||  OVERS -%d\n",over); 
  printf("========================= %s team                       %s team ==============================",t1_nm,t2_nm);
  //player name//////////////////////////////////////////////////////////////////////////////////////////////////////////
  gotoxy(1,24);
  printf("=player 1  %s",t1_pl[1]);
  gotoxy(1,25);
  printf("=player 2  %s",t1_pl[2]);
  gotoxy(1,26);
  printf("=player 3  %s",t1_pl[3]);
  gotoxy(1,27);
  printf("=player 4  %s",t1_pl[4]);
  gotoxy(1,28);
  printf("=player 5  %s",t1_pl[5]);
  gotoxy(1,29);
  printf("=player 6  %s",t1_pl[6]);
  gotoxy(1,30);
  printf("=player 7  %s",t1_pl[7]);
  gotoxy(1,31);
  printf("=player 8  %s",t1_pl[8]);
  gotoxy(1,32);
  printf("=player 9  %s",t1_pl[9]);
  gotoxy(1,33);
  printf("=player 10 %s",t1_pl[10]);
  gotoxy(1,34);
  printf("=player 11 %s",t1_pl[11]);
  //score/////////////////////////////////////////////////////////////////////////////////////////////////////////
 /* gotoxy(30,24);
  printf("   %d",t1_sc[1]);
  gotoxy(30,25);
  printf("   %d",t1_sc[2]);
  gotoxy(30,26);
  printf("   %d",t1_sc[3]);
  gotoxy(30,27);
  printf("   %d",t1_sc[4]);
  gotoxy(30,28);
  printf("   %d",t1_sc[5]);
  gotoxy(30,29);
  printf("   %d",t1_sc[6]);
  gotoxy(30,30);
  printf("   %d",t1_sc[7]);
  gotoxy(30,31);
  printf("   %d",t1_sc[8]);
  gotoxy(30,32);
  printf("   %d",t1_sc[9]);
  gotoxy(30,33);
  printf("   %d",t1_sc[10]);
  gotoxy(30,34);
  printf("   %d",t1_sc[11]);
*/  //team 2 player/////////////////////////////////////////////////
  
  gotoxy(55,24);
  printf("=player 1  %s",t2_pl[1]);
  gotoxy(55,25);
  printf("=player 2  %s",t2_pl[2]);
  gotoxy(55,26);
  printf("=player 3  %s",t2_pl[3]);
  gotoxy(55,27);
  printf("=player 4  %s",t2_pl[4]);
  gotoxy(55,28);
  printf("=player 5  %s",t2_pl[5]);
  gotoxy(55,29);
  printf("=player 6  %s",t2_pl[6]);
  gotoxy(55,30);
  printf("=player 7  %s",t2_pl[7]);
  gotoxy(55,31);
  printf("=player 8  %s",t2_pl[8]);
  gotoxy(55,32);
  printf("=player 9  %s",t2_pl[9]);
  gotoxy(55,33);
  printf("=player 10 %s",t2_pl[10]);
  gotoxy(55,34);
  printf("=player 11 %s",t2_pl[11]);
  //score2////////////////////////////////////////////////////////////////////////////////////
  //score/////////////////////////////////////////////////////////////////////////////////////////////////////////
  /*gotoxy(90,24);
  printf("   %d",t2_sc[1]);
  gotoxy(90,25);
  printf("   %d",t2_sc[2]);
  gotoxy(90,26);
  printf("   %d",t2_sc[3]);
  gotoxy(90,27);
  printf("   %d",t2_sc[4]);
  gotoxy(90,28);
  printf("   %d",t2_sc[5]);
  gotoxy(90,29);
  printf("   %d",t2_sc[6]);
  gotoxy(90,30);
  printf("   %d",t2_sc[7]);
  gotoxy(90,31);
  printf("   %d",t2_sc[8]);
  gotoxy(90,32);
  printf("   %d",t2_sc[9]);
  gotoxy(90,33);
  printf("   %d",t2_sc[10]);
  gotoxy(90,34);
  printf("   %d",t2_sc[11]);
*/}
}
void start()
{
	nwmtch();
	gotoxy(16,12);
	scanf(" %s",cmp);
	nwmtch();
	gotoxy(45,12);
	scanf(" %s",venue);
	nwmtch();
	gotoxy(13,14);
	scanf(" %[^\n]s",t1_nm);
	nwmtch();
	gotoxy(45,14);
	scanf(" %[^\n]s",t2_nm);
	nwmtch();
	gotoxy(18,16);
	scanf(" %[^\n]s",toss);
	nwmtch();
	gotoxy(44,16);
	scanf(" %s",choosed);
	nwmtch();
	gotoxy(13,18);
	scanf("%d",&over);
	nwmtch();
	//working///////////////////////////////////////////////////////////
	//playername name team 1
  gotoxy(18,24);
  scanf(" %[^\n]s",t1_pl[1]);
  nwmtch();
  gotoxy(18,25);
  scanf(" %[^\n]s",t1_pl[2]);
  nwmtch();
  gotoxy(18,26);
  scanf(" %[^\n]s",t1_pl[3]);
  nwmtch();
  gotoxy(18,27);
  scanf(" %[^\n]s",t1_pl[4]);
  nwmtch();
  gotoxy(18,28);
  scanf(" %[^\n]s",t1_pl[5]);
  nwmtch();
  gotoxy(18,29);
  scanf(" %[^\n]s",t1_pl[6]);
  nwmtch();
  gotoxy(18,30);
  scanf(" %[^\n]s",t1_pl[7]);
  nwmtch();
  gotoxy(18,31);
  scanf(" %[^\n]s",t1_pl[8]);
  nwmtch();
  gotoxy(18,32);
  scanf(" %[^\n]s",t1_pl[9]);
  nwmtch();
  gotoxy(18,33);
  scanf(" %[^\n]s",t1_pl[10]);
  nwmtch();
  gotoxy(18,34);
  scanf(" %[^\n]s",t1_pl[11]);
  nwmtch();
  	//playername name team 2
  gotoxy(66,24);
  scanf(" %[^\n]s",t2_pl[1]);
  nwmtch();
  gotoxy(66,25);
  scanf(" %[^\n]s",t2_pl[2]);
  nwmtch();
  gotoxy(66,26);
  scanf(" %[^\n]s",t2_pl[3]);
  nwmtch();
  gotoxy(66,27);
  scanf(" %[^\n]s",t2_pl[4]);
  nwmtch();
  gotoxy(66,28);
  scanf(" %[^\n]s",t2_pl[5]);
  nwmtch();
  gotoxy(66,29);
  scanf(" %[^\n]s",t2_pl[6]);
  nwmtch();
  gotoxy(66,30);
  scanf(" %[^\n]s",t2_pl[7]);
  nwmtch();
  gotoxy(66,31);
  scanf(" %[^\n]s",t2_pl[8]);
  nwmtch();
  gotoxy(66,32);
  scanf(" %[^\n]s",t2_pl[9]);
  nwmtch();
  gotoxy(66,33);
  scanf(" %[^\n]s",t2_pl[10]);
  nwmtch();
  gotoxy(66,34);
  scanf(" %[^\n]s",t2_pl[11]);
  nwmtch();
  getch();
}




