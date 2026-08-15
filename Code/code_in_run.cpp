#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
int main(){
	freopen("IN.rxt","r",stdin);
	freopen("OUT.cpp","w",stdout);
	char s[9000];
	memset(s,0,sizeof(s));
	while(gets(s)!=NULL)
	{
		if(s[0]=='i'&&s[1]=='m')
		{
			if(s[2]==' ')
			{
				if(s[3]=='I'&&s[4]=='O')
				{
					printf("#include<iostream>\n");
				}
				if(s[3]=='s'&&s[4]=='t'&&s[5]=='r')
				{
					printf("#include<cstring>\n");
				}
				if(s[3]=='A'&&s[4]=='O')
				{
					printf("#include<cmath>\n");
				}
				if(s[3]=='s'&&s[4]=='t'&&s[5]=='l')
				{
					printf("#include<algorithm>\n");
				}
				if(s[3]=='!'&&s[4]=='D')
				{
					printf("#define int long long\n");
				}
				if(s[3]=='!'&&s[4]=='N'&&s[5]=='E')
				{
					printf("using namespace std;\n");
				}
				memset(s,0,sizeof(s));
			}
		}
		if(s[0]=='N'&&s[1]=='E')
		{
			if(s[2]==' ')
			{
				printf("int %c%c%c=-1;\n",s[3],s[4],s[5]);
			}
			memset(s,0,sizeof(s));
		}
		if(s[0]=='s'&&s[1]=='t')
		{
			if(s[2]==' '&&s[6]==' ')
			{
				printf("%c%c%c=%c%c%c;\n",s[3],s[4],s[5],s[7],s[8],s[9]);
			}
		}
		if(s[0]=='p'&&s[1]=='r')
		{
			if(s[2]==' ')
			{
				printf("printf(\"%cd\",%c%c%c);",'\u0025',s[3],s[4],s[5]);
			}
		}
		if(s[0]=='M'&&s[1]=='f')
		{
			if(s[2]==' ')
			{
				printf("%c%c%c main(){\n",s[3],s[4],s[5]);
			}
		}
		if(s[0]=='C'&&s[1]=='S')
		{
			if(s[2]==' ')
			{
				printf("char %c%c%c[50];\n",s[3],s[4],s[5]);
			}
		}
		if(s[0]=='p'&&s[1]=='s')
		{
			if(s[2]==' ')
			{
				printf("printf(\"%cs\\n\",%c%c%c);\n",'\u0025',s[3],s[4],s[5]);
			}
		}
		if(s[0]=='r'&&s[1]=='s')
		{
			if(s[2]==' ')
			{
				printf("scanf(\"%cs\",%c%c%c);\n",'\u0025',s[3],s[4],s[5]);
			}
		}
		if(s[0]=='C'&&s[1]=='E')
		{
			if(s[2]==' ')
			{
				for(int i=3;i<strlen(s);i++)
				{
					printf("%c",s[i]);
				}
				printf("\n");
			}
		}
		if(s[0]=='r'&&s[1]=='e')
		{
			if(s[2]==' ')
			{
				printf("//");
				for(int i=3;i<strlen(s);i++)
				{
					printf("%c",s[i]);
				}
				printf("\n");
				s[2]='\\';
			}
		}
		if(s[0]=='S'&&s[1]=='E')
		{
			if(s[2]==' ')
			{
				printf("sort(%c%c%c,%c%c%c+strlen(%c%c%c));\n",s[3],s[4],s[5],s[3],s[4],s[5],s[3],s[4],s[5]);
			}
		}
		if(s[0]=='s'&&s[1]=='q'&&s[2]=='r'&&s[3]=='t')
		{
			if(s[4]==' ')
			{
				printf("%c%c%c=sqrt(%c%c%c);\n",s[5],s[6],s[7],s[5],s[6],s[7]);
			}
		}
	}
	printf("return 0;}");
	fclose(stdin);
	fclose(stdout);
	system("g++ OUT.cpp -o OUTFILE.exe");
	printf("\n");
	system("OUTFILE");
	return 0;
}
