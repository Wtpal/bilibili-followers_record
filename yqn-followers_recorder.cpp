#include<cstdio>
#include<Windows.h>
#include<cstring>
#include<iostream>
#include <time.h>
using namespace std;
char x[30000];
char z[100];
int t=0;
int main()
{
	while(1)
	{
		system("wget -O C:\\bilibili\\22310856-Ó£Ç§ÄÎ\\111.txt https://api.bilibili.com/x/relation/stat?vmid=609100583");
		freopen("111.txt","r",stdin);
		freopen("followers.csv","a+w",stdout);
		fgets(x,3000,stdin);
		for(int i=strlen(x)-3;;i--)
		{
			if(x[i]>='0'&&x[i]<='9')
			{z[t]=x[i];t++;}
			else break;
		}
		time_t timep;
		struct tm *p;
		time (&timep);
		p=gmtime(&timep);
		printf("%dÔÂ%dÈÕ,",1+p->tm_mon,p->tm_mday);
		for(int i=t-1;i>=0;--i) printf("%c",z[i]);
		printf("\n");
		fclose(stdin);
		fclose(stdout);
		memset(x,0,sizeof(x));
		memset(z,0,sizeof(z));
		t=0;
		for(int i=0;i<24;++i)
			for(int j=0;j<60;++j)
				Sleep(60000);
	}
	return 0;
} 
