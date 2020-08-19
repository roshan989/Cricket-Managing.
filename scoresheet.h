
int scoresheet()
{   int i;
	FILE *f,*p;
	f=fopen("E:\scoresheet.dat","wb");
	fwrite(cmp,sizeof(char)*10,1,f);
	fwrite(venue,sizeof(char)*30,1,f);
	fwrite(t1_nm,sizeof(char)*10,1,f);
	fwrite(t2_nm,sizeof(char)*10,1,f);
	fwrite(toss,sizeof(char)*10,1,f);
	fwrite(choosed,sizeof(char)*5,1,f);
	fwrite(&over,sizeof(char)*2,1,f);
	for(i=1;i<=11;i++)
	{
	fwrite(&t1_pl[i],sizeof(char)*40,1,f);
    }
    for(i=1;i<=11;i++)
	{
	fwrite(&t2_pl[i],sizeof(char)*40,1,f);
    }
    for(i=1;i<=11;i++)
	{
	fwrite(&t1_sc[i],sizeof(int),1,f);
    }
    
    for(i=1;i<=11;i++)
	{
	fwrite(&t2_sc[i],sizeof(int),1,f);
    }
    fwrite(&sct[1],sizeof(int),1,f);
    fwrite(&sct[2],sizeof(int),1,f);
    
    fwrite(&out[1],sizeof(int),1,f);
    fwrite(&out[2],sizeof(int),1,f);
    
	
	puts("\ncreating...................");
	
	puts("\ncreated");
	fclose(f);
}

int scoresheetr()
{
	 int i;
	FILE *f,*p;
	f=fopen("E:\scoresheet.dat","rb");
	fread(cmp,sizeof(char)*10,1,f);
	fread(venue,sizeof(char)*30,1,f);
	fread(t1_nm,sizeof(char)*10,1,f);
	fread(t2_nm,sizeof(char)*10,1,f);
	fread(toss,sizeof(char)*10,1,f);
	fread(choosed,sizeof(char)*5,1,f);
	fread(&over,sizeof(char)*2,1,f);
	for(i=1;i<=11;i++)
	{
	fread(&t1_pl[i],sizeof(char)*40,1,f);
    }
    for(i=1;i<=11;i++)
	{
	fread(&t2_pl[i],sizeof(char)*40,1,f);
    }
    for(i=1;i<=11;i++)
	{
	fread(&t1_sc[i],sizeof(int),1,f);
    }
    
    for(i=1;i<=11;i++)
	{
	fread(&t2_sc[i],sizeof(int),1,f);
    }
    fread(&sct[1],sizeof(int),1,f);
    fread(&sct[2],sizeof(int),1,f);
    
    fread(&out[1],sizeof(int),1,f);
    fread(&out[2],sizeof(int),1,f);
    for(i=1;i<=8;i++)
	{
	fread(&t1_bl[i],sizeof(int),1,f);
    }
    for(i=1;i<=8;i++)
	{
	fread(&t2_bl[i],sizeof(int),1,f);
    }

	fclose(f);
}


