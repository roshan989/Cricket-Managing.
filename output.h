void score(int run,int ou)
{
	t1_sc[ou]=t1_sc[ou]+run;
	
}
void score2(int run,int ou)
{
	t2_sc[ou]=t2_sc[ou]+run;
}

void rt_sc()
{    float c_rate,r_rate;int flag=0,note=0;
     char choice; 
     
	 if(strcmp(toss,t1_nm)==0)/// for team 1
     { if(0==strcmp(choosed,"batting"))
       note=1;
	 }
	 else
	 if(0==strcmp(choosed,"fielding"))
	 note=1;
	 
	 
	 if(note==1)
{   int i,ball,ou=1,j=1,run=0,count,flag=0,ou1,ou2;
    int swap;
    ball=over*6;     
    for(i=1;i<=ball;i++)
	 {
    	
    	
    		if(ou>=11)
    		{break;}
    		//loop break
    
    
    {  
    system("cls");
    gotoxy(15,8);
	puts(" ======================================================================================");
	gotoxy(16,9);
	puts("||");
	gotoxy(16,10);
	puts("||");
	gotoxy(16,11);
	puts("||");
	gotoxy(16,12);
	puts("||");
	gotoxy(16,13);
	puts("||");
	gotoxy(16,14);
	puts("||");
	gotoxy(16,15);
	puts("||");
	gotoxy(16,16);
	puts("||");
	//second column
	gotoxy(100,9);
	puts("||");
	gotoxy(100,10);
	puts("||");
	gotoxy(100,11);
	puts("||");
	gotoxy(100,12);
	puts("||");
	gotoxy(100,13);
	puts("||");
	gotoxy(100,14);
	puts("||");
	gotoxy(100,15);
	puts("||");
	gotoxy(100,16);
	puts("||");
	//final line
	 gotoxy(15,17);
	puts(" ======================================================================================");
	gotoxy(18,9);
	printf("Batting - %s",t1_nm);
	
	gotoxy(80,9);
	printf("Fielding - %s",t2_nm); 
	gotoxy(18,16);
	printf("enter run 0-1-2-3-4-5-6 or 9 for out");
	 
	 }
	 //block end
	 if(run==9)
	 {
	   ou1=ou+1;
	 }
	 
	 if(i==1)
	 {   ou1=ou+1;
    	 ou2=ou1+1;
		 
     }
	 
      { if(run!=9)
		   score(run,ou1);
    	    }  
       if(flag==0)    
	   if(run==1)
	  { 
	    swap=ou1;
	    ou1=ou2;
	    ou2=swap;
	    flag=1;
	    
			} 	  	 
		
          sct[1]=0;
		  for(count=1;count<11;count++)
		  {
		  	sct[1]=sct[1]+ t1_sc[count]; 
			  }	
		
		out[1]=ou-1;
		
		  gotoxy(18,12);
	      puts("batsman");
		  gotoxy(18,14);
	      printf("%s",t1_pl[ou1]);
	      gotoxy(30,14);
		  printf("%d",t1_sc[ou1]);
	     
		  gotoxy(18,15);
	      printf("%s",t1_pl[ou2]);
	      gotoxy(30,15);
		  printf("%d",t1_sc[ou2]); 
	    
	      
	      
	         //score
		  gotoxy(42,9);
          printf(" %d / %d",sct[1],out[1]);
          //bowler
          if(i%6==0)
		 { c_rate=sct[1]/j;
            j++;
          }
           gotoxy(45,14);
           printf("current run rate-%d",c_rate);
		   gotoxy(90,12);
           printf("bowler");
           t1_bl[j]=t2_pl[j];
		   gotoxy(90,14);
           printf("%s",t2_pl[j]);
           //
           gotoxy(45,24);
           puts("if right ball press 7");
           scanf("%d",&flag);
		   if(flag!=7)
           {i--;
		   }
           
		    gotoxy(90,16); 
			scanf("%d",&run);
		
		  if(flag!=7)
		   { if(run==0||run==9)
		     run=1;
		     flag=1;
		   }
		             
	      if(run==9)
		 { ou=ou+1;
		  }
		  
		  
      }
      
      i=1;ou=1;j=1;run=0;count;flag=0;
    
    ball=over*6;     
    for(i=1;i<=ball;i++)
	 {
    	
    	
    		if(ou>=11)
    		{break;}
    		//loop break
    
    
    {  
    system("cls");
    gotoxy(15,8);
	puts(" ======================================================================================");
	gotoxy(16,9);
	puts("||");
	gotoxy(16,10);
	puts("||");
	gotoxy(16,11);
	puts("||");
	gotoxy(16,12);
	puts("||");
	gotoxy(16,13);
	puts("||");
	gotoxy(16,14);
	puts("||");
	gotoxy(16,15);
	puts("||");
	gotoxy(16,16);
	puts("||");
	//second column
	gotoxy(100,9);
	puts("||");
	gotoxy(100,10);
	puts("||");
	gotoxy(100,11);
	puts("||");
	gotoxy(100,12);
	puts("||");
	gotoxy(100,13);
	puts("||");
	gotoxy(100,14);
	puts("||");
	gotoxy(100,15);
	puts("||");
	gotoxy(100,16);
	puts("||");
	//final line
	 gotoxy(15,17);
	puts(" ======================================================================================");
	gotoxy(18,9);
	printf("Batting - %s",t2_nm);
	
	gotoxy(80,9);
	printf("Fielding - %s",t1_nm); 
	gotoxy(18,16);
	printf("enter run 0-1-2-3-4-5-6 or 9 for out");
	 
	 }
	 
	 //block end
	     
	   
	   /* 
		 if(run==1)
	      {t=pout-1; 
	       swap=pout;
	       pout=t;
	       t=swap;}
    	 */
         if(run==9)
         ou1=ou+1;
     	  
	      if(i==1)
      	 {   ou1=ou+1;
    	     ou2=ou1+1;
		 
           }
	     
          
		  { if(run!=9)
    	   {score2(run,ou1);
    	    }  
           }
          if(flag==0) 
    	  if(run==1)
	    { swap=ou1;
	     ou1=ou2;
	     ou2=swap;
	     flag=1;
			} 	  	 
		
    	 
	
          sct[2]=0;
		  for(count=1;count<11;count++)
		  {
		  	sct[2]=sct[2]+ t2_sc[count];
			  }	
		
		out[2]=ou-1;
		
		  gotoxy(18,12);
	      puts("batsman");
		  gotoxy(18,14);
	      printf("%s",t2_pl[ou1]);
	      gotoxy(30,14);
		  printf("%d",t2_sc[ou1]);
	     
		  gotoxy(18,15);
	      printf("%s",t2_pl[ou2]);
	      gotoxy(30,15);
		  printf("%d",t2_sc[ou2]); 
	    
	      
	      
	         //score
		  gotoxy(42,9);
          printf(" %d / %d",sct[2],out[2]);
          //bowler
          if(i%6==0)
		  {
		    c_rate=sct[2]/j;
		   j++;
           }
           gotoxy(45,13);
           printf("current run rate-%d ",c_rate);
           
		   gotoxy(90,12);
           printf("bowler");
           t2_bl[j]=t1_pl[j];
		   gotoxy(90,14);
           printf("%s",t1_pl[j]);
           //
           gotoxy(45,24);
           puts("if right ball press 7");
           scanf("%d",&flag);
		   if(flag!=7)
           {i--;
		   }
		    gotoxy(90,16); 
			scanf("%d",&run);
		   if(flag!=7)
		   { if(run==0||run==9)
		     run=1;
		     flag=1;
		   }
		             
	      if(run==9)
		 { ou=ou+1;
		  }
		  
		  
      }
     } 
      
     //////////////////////////
	 else  
	///////////////////////////////////////////for team 2 
 {  int i=1,ball,ou=1,j=1,run=0,count,flag=0,ou1=1,ou2=2;;
    int swap;
    ball=over*6;     
    for(i=1;i<=ball;i++)
	 {
    	
    	
    		if(ou>=11)
    		{break;}
    		//loop break
    
    
    {  
    system("cls");
    gotoxy(15,8);
	puts(" ======================================================================================");
	gotoxy(16,9);
	puts("||");
	gotoxy(16,10);
	puts("||");
	gotoxy(16,11);
	puts("||");
	gotoxy(16,12);
	puts("||");
	gotoxy(16,13);
	puts("||");
	gotoxy(16,14);
	puts("||");
	gotoxy(16,15);
	puts("||");
	gotoxy(16,16);
	puts("||");
	//second column
	gotoxy(100,9);
	puts("||");
	gotoxy(100,10);
	puts("||");
	gotoxy(100,11);
	puts("||");
	gotoxy(100,12);
	puts("||");
	gotoxy(100,13);
	puts("||");
	gotoxy(100,14);
	puts("||");
	gotoxy(100,15);
	puts("||");
	gotoxy(100,16);
	puts("||");
	//final line
	 gotoxy(15,17);
	puts(" ======================================================================================");
	gotoxy(18,9);
	printf("Batting - %s",t2_nm);
	
	gotoxy(80,9);
	printf("Fielding - %s",t1_nm); 
	gotoxy(18,16);
	printf("enter run 0-1-2-3-4-5-6 or 9 for out");
	 
	 }
	 
	 //block end
	     
	   
	   /* 
		 if(run==1)
	      {t=pout-1; 
	       swap=pout;
	       pout=t;
	       t=swap;}
    	 */
         if(run==9)
         ou1=ou+1;
	 
    	
	      if(i==1)
      	 {   ou1=ou+1;
    	     ou2=ou1+1;
		 
          
	     }
          
		  { if(run!=9)
    	   {score2(run,ou1);
    	    }  
           }
         if(flag==0)  
    	  if(run==1)
	    { swap=ou1;
	     ou1=ou2;
	     ou2=swap;
	     flag=1;
			} 	  	 
		
    	 
	
          sct[2]=0;
		  for(count=1;count<11;count++)
		  {
		  	sct[2]=sct[2]+ t2_sc[count];
			  }	
		
		out[2]=ou-1;
		
		  gotoxy(18,12);
	      puts("batsman");
		  gotoxy(18,14);
	      printf("%s",t2_pl[ou1]);
	      gotoxy(30,14);
		  printf("%d",t2_sc[ou1]);
	     
		  gotoxy(18,15);
	      printf("%s",t2_pl[ou2]);
	      gotoxy(30,15);
		  printf("%d",t2_sc[ou2]); 
	    
	      
	      
	         //score
		  gotoxy(42,9);
          printf(" %d / %d",sct[2],out[2]);
          //bowler
          if(i%6==0)
		  {
		    c_rate=sct[2]/j;
		   j++;
           }
           gotoxy(45,13);
           printf("current run rate-%d ",c_rate);
           
		   gotoxy(90,12);
           printf("bowler");
           t2_bl[j]=t1_pl[j];
		   gotoxy(90,14);
           printf("%s",t1_pl[j]);
           //
            gotoxy(45,24);
           puts("if right ball press 7");
           scanf("%d",&flag);
		   if(flag!=7)
           {i--;
		   }
		    gotoxy(90,16); 
			scanf("%d",&run);
		   if(flag!=7)
		   { if(run==0||run==9)
		     run=1;
		     flag=1;
		   }
		             
	      if(run==9)
		 { ou=ou+1;
		  }
		  
		  
      }
     
   ou=1;j=1;run=0;count;flag=0;
        
    for(i=1;i<=ball;i++)
	 {
    	
    	
    		if(ou>=11)
    		{break;}
    		//loop break
    
    
    {  
    system("cls");
    gotoxy(15,8);
	puts(" ======================================================================================");
	gotoxy(16,9);
	puts("||");
	gotoxy(16,10);
	puts("||");
	gotoxy(16,11);
	puts("||");
	gotoxy(16,12);
	puts("||");
	gotoxy(16,13);
	puts("||");
	gotoxy(16,14);
	puts("||");
	gotoxy(16,15);
	puts("||");
	gotoxy(16,16);
	puts("||");
	//second column
	gotoxy(100,9);
	puts("||");
	gotoxy(100,10);
	puts("||");
	gotoxy(100,11);
	puts("||");
	gotoxy(100,12);
	puts("||");
	gotoxy(100,13);
	puts("||");
	gotoxy(100,14);
	puts("||");
	gotoxy(100,15);
	puts("||");
	gotoxy(100,16);
	puts("||");
	//final line
	 gotoxy(15,17);
	puts(" ======================================================================================");
	gotoxy(18,9);
	printf("Batting - %s",t1_nm);
	
	gotoxy(80,9);
	printf("Fielding - %s",t2_nm); 
	gotoxy(18,16);
	printf("enter run 0-1-2-3-4-5-6 or 9 for out");
	 
	 }
	 //block end
	 if(run==9)
	 {
	   ou1=ou+1;
	 }
	 
	 
	      if(i==1)
      	 {   ou1=ou+1;
    	     ou2=ou1+1;
		 
           }
	     
	     
      { if(run!=9)
		   score(run,ou1);
    	    }  
       if(flag==0)    
	   if(run==1)
	  { 
	    swap=ou1;
	    ou1=ou2;
	    ou2=swap;
	    flag=1;
			} 	  	 
		
          sct[1]=0;
		  for(count=1;count<11;count++)
		  {
		  	sct[1]=sct[1]+ t1_sc[count]; 
			  }	
		
		out[1]=ou-1;
		
		  gotoxy(18,12);
	      puts("batsman");
		  gotoxy(18,14);
	      printf("%s",t1_pl[ou1]);
	      gotoxy(30,14);
		  printf("%d",t1_sc[ou1]);
	     
		  gotoxy(18,15);
	      printf("%s",t1_pl[ou2]);
	      gotoxy(30,15);
		  printf("%d",t1_sc[ou2]); 
	    
	      
	      
	         //score
		  gotoxy(42,9);
          printf(" %d / %d",sct[1],out[1]);
          //bowler
          if(i%6==0)
		 { c_rate=sct[1]/j;
            j++;
          }
           gotoxy(45,14);
           printf("current run rate-%d",c_rate);
		   gotoxy(90,12);
           printf("bowler");
           t1_bl[j]=t2_pl[j];
		   gotoxy(90,14);
           printf("%s",t2_pl[j]);
           //
           gotoxy(45,24);
           puts("if right ball press 7");
           scanf("%d",&flag);
		   if(flag!=7)
           {i--;
		   }
           
		    gotoxy(90,16); 
			scanf("%d",&run);
		
		  if(flag!=7)
		   { if(run==0||run==9)
		     run=1;
		     flag==1;
		   }
		             
	      if(run==9)
		 { ou=ou+1;
		  }
		  
		  
  }
  }
}



