#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#define VERSION " BOXCHAR  Ver 2.1        18-Jun-93        WildeWare for DOS & OS2 Family Mode"


int zk=0;
int xk=0;
int ck=0;
int vk=0;
int bk=0;
int nk=0;
int mk=0;
int nextk=0;
float zp=0;
float xp=0;
float cp=0;
float vp=0;
float bp=0;
float np=0;
float mp=0;
float nextp=0;
int sum=0;
short int flagsum=0;
char convhizh;

int main()
{
	system("COLOR F4");
	int i, res, mode;
	char menu[5][80] = {"Program for manually counting blood cells with microscope.",
				"1. Main program -> Start",
				"2. Help",
				"3. About",
				"4. Exit"};
 do
{ system("cls");
   for(i=0; i < 5; i++)
    printf ("\n%s\n",menu[i]);
    do
       { printf ("\n\nChoose of [1-4]: ");
         res = scanf("%d", &mode);
       }
       while(res <= 0 || res > 3);
    switch(mode)
    { case 1:
		startfun ();
    	system("pause");
       break;
      case 2:
      	helpfun ();
       system("pause");
       break;
      case 3:
       about();
       system("pause");
       break;
      case 4:
	  exit (1); 
	  break;
      default:
        printf("\nWrong choice! \n");
        system("pause");
    }
}
while(mode != 4);
return 0;
}

void about()
{
	system("cls");
	printf("                                        \n");
    printf("             :BBBBBBBBBBBB              \n");
    printf("             .BBgRgMgMgRQB              \n");
    printf("             .BQgDMgMgggBB              \n");
    printf("             .BBDMgMgMDgQB              \n");
    printf("              BQMgggMDMgBB              \n");
    printf("              BQDMDgggDRQB              \n");
    printf(" qPIS25I5252uIBgMgMDMggDQB2j5ISI5IS2Sb5 \n");
    printf(" BQBBBBBBBBBBBMMgMgggggMgQBBBBBBQBBBBBB \n");
    printf(" BBMQgQgQgRMRgMgMDggMgMgggMgQMRMRMRMQQQ \n");
    printf(" BQMDgDgDggggMggggggDgDMgMDMgMgMggDggBg \n");
    printf(" BBgMgMggDgDgDgggDggMgMgggMggggggDgDMBR \n");
    printf(" BBQMQgQMQMRgMgMgggMDggMgMgRMQMRMRMQMBR \n");
    printf("             :BBBBBBBBBBBB              \n");
    printf("             .BBgRgMgMgRQB              \n");
    printf("             .BQgDMgMgggBB              \n");
    printf("             .BBDMgMgMDgQB              \n");
    printf("              BQMgggMDMgBB              \n");
    printf("              BQDMDgggDRQB              \n");
    printf("\n");
    printf("Program for counting blood cells with microscope. ver 1.4");
    printf("\nCreated by Stefan Voykov.");
    printf("\nThis program is open source.");
    printf("\nThis program uses license MIT license.\n");
    printf("Web Page: https://sites.google.com/prod/view/wbccounterwindows/\n");
    printf("Github Page: https://github.com/voikovi/Software_Manual_WBC_Differential_Counter\n");
}

void startfun ()
{

	while (1)
	{
	system("cls");
	if (flagsum==0)
	{
		drawfun0 ();
		convhizh=getch();

		if (convhizh == 'c' || convhizh == 'C')
		{
			zk++;
			sum++;
			flagsum=1;
			zp= (float)zk/sum * 100;
			
		}
		else if (convhizh == 'v' || convhizh == 'V')
		{
			xk++;
			sum++;
			flagsum=1;
			xp= (float)xk/sum * 100;
			
		}
		else if (convhizh == 'b' || convhizh == 'B')
		{
			ck++;
			sum++;
			flagsum=1;
			cp= (float)ck/sum * 100;
			
		}
		else if (convhizh == 'n' || convhizh == 'N')
		{
			vk++;
			sum++;
			flagsum=1;
			vp= (float)vk/sum * 100;
			
		}
		else if (convhizh == 'm' || convhizh == 'M')
		{
			bk++;
			sum++;
			flagsum=1;
			bp= (float)bk/sum * 100;
			
		}
		else if (convhizh == ',' || convhizh == '<')
		{
			nk++;
			sum++;
			flagsum=1;
			np= (float)nk/sum * 100;
			
		}
		else if (convhizh == '.' || convhizh == '>')
		{
			mk++;
			sum++;
			flagsum=1;
			mp= (float)mk/sum * 100;
			
		}
		else if (convhizh == '/' || convhizh == '?')
		{
			nextk++;
			sum++;
			flagsum=1;
			nextp= (float)nextk/sum * 100;
			
		}
		else if (convhizh == '0')
		{

			zk=0;
			xk=0;
			ck=0;
			vk=0;
			bk=0;
			nk=0;
			mk=0;
			nextk=0;
			zp=0;
			xp=0;
			cp=0;
			vp=0;
			bp=0;
			np=0;
			mp=0;
			nextp=0;
			sum=0;
			flagsum=0;
			drawfun0();
			printf("\nYou set the counter to zero.\a\n");	
		}
		else if (convhizh == '9')
		exit(1);
		else if (convhizh == '7')
		{
	
	
		
		FILE *f = fopen("FileBr.txt", "w");
		if (f == NULL)
		{
    		printf("Error opening file.\n");
    		exit(1);
		}


			fprintf(f, "+--------------------------------------------------------------------------------+\n");
			fprintf(f, "|        |        |        |        |        |        |        |        ||       |\n");
			fprintf(f, "|  BASO. | EOSIN. | MYELO. | JUVEN. |  STAB. |  SEG.  | LYMPH. |  MONO. || TOTAL |\n");
			fprintf(f, "|00000000|00000000|00000000|00000000|00000000|00000000|00000000|00000000||0000000|\n");
			fprintf(f, "|--------|--------|--------|--------|--------|--------|--------|--------||       |\n");
			fprintf(f, "|0000000%%|0000000%%|0000000%%|0000000%%|0000000%%|0000000%%|0000000%%|0000000%%||       |\n");
			fprintf(f, "|   |C|  |   |V|  |   |B|  |   |N|  |   |M|  |   |<|  |   |>|  |   |?|  ||       |\n");
			fprintf(f, "+--------------------------------------------------------------------------------+\n");


		fclose(f);
		printf("\a");
	
		}
		else
		printf("Wrong choice.");
	
		if (sum==50)
		printf("\a");
	
		if (sum==100)
		{
			printf("You reached 100 cells!!!\a\n");
		
			FILE *f = fopen("FileBr.txt", "w");
			if (f == NULL)
			{
    			printf("Error opening file.\n");
    			exit(1);
			}


			fprintf(f, "+--------------------------------------------------------------------------------+\n");
			fprintf(f, "|        |        |        |        |        |        |        |        ||       |\n");
			fprintf(f, "|  BASO. | EOSIN. | MYELO. | JUVEN. |  STAB. |  SEG.  | LYMPH. |  MONO. || TOTAL |\n");
			fprintf(f, "|00000000|00000000|00000000|00000000|00000000|00000000|00000000|00000000||0000000|\n");
			fprintf(f, "|--------|--------|--------|--------|--------|--------|--------|--------||       |\n");
			fprintf(f, "|0000000%%|0000000%%|0000000%%|0000000%%|0000000%%|0000000%%|0000000%%|0000000%%||       |\n");
			fprintf(f, "|   |C|  |   |V|  |   |B|  |   |N|  |   |M|  |   |<|  |   |>|  |   |?|  ||       |\n");
			fprintf(f, "+--------------------------------------------------------------------------------+\n");


			fclose(f);
		
		}

  	}
  		system("cls");
		  if (flagsum==1)
  		{
  		
		  drawfun2 ();
		convhizh=getch();

		if (convhizh == 'c' || convhizh == 'C')
		{
			zk++;
			sum++;
			flagsum=1;
			zp= (float)zk/sum * 100;
			xp= (float)xk/sum * 100;
			cp= (float)ck/sum * 100;
			vp= (float)vk/sum * 100;
			bp= (float)bk/sum * 100;
			np= (float)nk/sum * 100;
			mp= (float)mk/sum * 100;
			nextp= (float)nextk/sum * 100;
			drawfun2();
		}
		else if (convhizh == 'v' || convhizh == 'V')
		{
			xk++;
			sum++;
			flagsum=1;
			zp= (float)zk/sum * 100;
			xp= (float)xk/sum * 100;
			cp= (float)ck/sum * 100;
			vp= (float)vk/sum * 100;
			bp= (float)bk/sum * 100;
			np= (float)nk/sum * 100;
			mp= (float)mk/sum * 100;
			nextp= (float)nextk/sum * 100;
			drawfun2();
		}
		else if (convhizh == 'b' || convhizh == 'B')
		{
			ck++;
			sum++;
			flagsum=1;
			zp= (float)zk/sum * 100;
			xp= (float)xk/sum * 100;
			cp= (float)ck/sum * 100;
			vp= (float)vk/sum * 100;
			bp= (float)bk/sum * 100;
			np= (float)nk/sum * 100;
			mp= (float)mk/sum * 100;
			nextp= (float)nextk/sum * 100;
			drawfun2();
		}
		else if (convhizh == 'n' || convhizh == 'N')
		{
			vk++;
			sum++;
			flagsum=1;
			zp= (float)zk/sum * 100;
			xp= (float)xk/sum * 100;
			cp= (float)ck/sum * 100;
			vp= (float)vk/sum * 100;
			bp= (float)bk/sum * 100;
			np= (float)nk/sum * 100;
			mp= (float)mk/sum * 100;
			nextp= (float)nextk/sum * 100;
			drawfun2();
		}
		else if (convhizh == 'm' || convhizh == 'M')
		{
			bk++;
			sum++;
			flagsum=1;
			zp= (float)zk/sum * 100;
			xp= (float)xk/sum * 100;
			cp= (float)ck/sum * 100;
			vp= (float)vk/sum * 100;
			bp= (float)bk/sum * 100;
			np= (float)nk/sum * 100;
			mp= (float)mk/sum * 100;
			nextp= (float)nextk/sum * 100;
			drawfun2();
		}
		else if (convhizh == ',' || convhizh == '<')
		{
			nk++;
			sum++;
			flagsum=1;
			xp= (float)xk/sum * 100;
			cp= (float)ck/sum * 100;
			vp= (float)vk/sum * 100;
			bp= (float)bk/sum * 100;
			np= (float)nk/sum * 100;
			mp= (float)mk/sum * 100;
			nextp= (float)nextk/sum * 100;
			drawfun2();
		}
		else if (convhizh == '.' || convhizh == '>')
		{
			mk++;
			sum++;
			flagsum=1;
			zp= (float)zk/sum * 100;
			xp= (float)xk/sum * 100;
			cp= (float)ck/sum * 100;
			vp= (float)vk/sum * 100;
			bp= (float)bk/sum * 100;
			np= (float)nk/sum * 100;
			mp= (float)mk/sum * 100;
			nextp= (float)nextk/sum * 100;
			drawfun2();
		}
		else if (convhizh == '/' || convhizh == '?')
		{
			nextk++;
			sum++;
			flagsum=1;
			zp= (float)zk/sum * 100;
			xp= (float)xk/sum * 100;
			cp= (float)ck/sum * 100;
			vp= (float)vk/sum * 100;
			bp= (float)bk/sum * 100;
			np= (float)nk/sum * 100;
			mp= (float)mk/sum * 100;
			nextp= (float)nextk/sum * 100;
			drawfun2();
		}
		else if (convhizh == '0')
		{
			zk=0;
			xk=0;
			ck=0;
			vk=0;
			bk=0;
			nk=0;
			mk=0;
			nextk=0;
			zp=0;
			xp=0;
			cp=0;
			vp=0;
			bp=0;
			np=0;
			mp=0;
			nextp=0;
			sum=0;
			flagsum=0;
			drawfun0();
			printf("\nYou set the counter to zero.\a\n");	
		}
		else if (convhizh == '9')
		exit(1);
		else if (convhizh == '7')
		{
	
	
		
		FILE *f = fopen("FileBr.txt", "w");
		if (f == NULL)
		{
    		printf("Error opening file.\n");
    		exit(1);
		}


			fprintf(f, "+--------------------------------------------------------------------------------+\n");
			fprintf(f, "|        |        |        |        |        |        |        |        ||       |\n");
			fprintf(f, "|  BASO. | EOSIN. | MYELO. | JUVEN. |  STAB. |  SEG.  | LYMPH. |  MONO. || TOTAL |\n");
			fprintf(f, "|%08d|%08d|%08d|%08d|%08d|%08d|%08d|%08d||%07d|\n", zk, xk, ck, vk, bk, nk, mk, nextk, sum);
			fprintf(f, "|--------|--------|--------|--------|--------|--------|--------|--------||       |\n");
			fprintf(f, "|%07d%%|%07d%%|%07d%%|%07d%%|%07d%%|%07d%%|%07d%%|%07d%%||       |\n", (int)zp, (int)xp, (int)cp, (int)vp, (int)bp, (int)np, (int)mp, (int)nextp);
			fprintf(f, "|   |C|  |   |V|  |   |B|  |   |N|  |   |M|  |   |<|  |   |>|  |   |?|  ||       |\n");
			fprintf(f, "+--------------------------------------------------------------------------------+\n");


		fclose(f);
		printf("\a");
	
		}
		else
		printf("Wrong choice.");
	
		if (sum==50)
		printf("\a");
	
		if (sum==100)
		{
			printf("You reached 100 cells!!!\a\n");
		
			FILE *f = fopen("FileBr.txt", "w");
			if (f == NULL)
			{
    			printf("Error opening file.\n");
    			exit(1);
			}


			fprintf(f, "+--------------------------------------------------------------------------------+\n");
			fprintf(f, "|        |        |        |        |        |        |        |        ||       |\n");
			fprintf(f, "|  BASO. | EOSIN. | MYELO. | JUVEN. |  STAB. |  SEG.  | LYMPH. |  MONO. || TOTAL |\n");
			fprintf(f, "|%08d|%08d|%08d|%08d|%08d|%08d|%08d|%08d||%07d|\n", zk, xk, ck, vk, bk, nk, mk, nextk, sum);
			fprintf(f, "|--------|--------|--------|--------|--------|--------|--------|--------||       |\n");
			fprintf(f, "|%07d%%|%07d%%|%07d%%|%07d%%|%07d%%|%07d%%|%07d%%|%07d%%||       |\n", (int)zp, (int)xp, (int)cp, (int)vp, (int)bp, (int)np, (int)mp, (int)nextp);
			fprintf(f, "|   |C|  |   |V|  |   |B|  |   |N|  |   |M|  |   |<|  |   |>|  |   |?|  ||       |\n");
			fprintf(f, "+--------------------------------------------------------------------------------+\n");


			fclose(f);
		
		}

  	}
		  	
	  	}
	}

void drawfun0()
{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 203, 205, 205, 205, 205, 205, 205, 205, 187);
	printf("%c        %c        %c        %c        %c        %c        %c        %C        %c%c       %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
	printf("%c  BASO. %c EOSIN. %c MYELO. %c JUVEN. %c  STAB. %c  SEG.  %c LYMPH. %c  MONO. %c%c TOTAL %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
	printf("%c00000000%c00000000%c00000000%c00000000%c00000000%c00000000%c00000000%c00000000%c%c0000000%c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 206, 205, 205, 205, 205, 205, 205, 205, 185);
	printf("%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c%c       %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
	printf("%c   |C|  %c   |V|  %c   |B|  %c   |N|  %c   |M|  %c   |<|  %c   |>|  %c   |?|  %c%c       %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 202, 205, 205, 205, 205, 205, 205, 205, 188);
}
void drawfun2()
	{
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 203, 205, 205, 205, 205, 205, 205, 205, 187);
	printf("%c        %c        %c        %c        %c        %c        %c        %C        %c%c       %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
	printf("%c  BASO. %c EOSIN. %c MYELO. %c JUVEN. %c  STAB. %c  SEG.  %c LYMPH. %c  MONO. %c%c TOTAL %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
	printf("%c%08d%c%08d%c%08d%c%08d%c%08d%c%08d%c%08d%c%08d%c%c%07d%c\n",186, zk, 186, xk, 186, ck, 186, vk, 186, bk, 186, nk, 186, mk, 186, nextk, 186, 186, sum, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 206, 205, 205, 205, 205, 205, 205, 205, 185);
	printf("%c%07d%%%c%07d%%%c%07d%%%c%07d%%%c%07d%%%c%07d%%%c%07d%%%c%07d%%%c%c       %c\n",186,  (int)zp, 186, (int)xp, 186, (int)cp, 186, (int)vp, 186, (int)bp, 186, (int)np, 186, (int)mp, 186, (int)nextp, 186, 186, 186);
	printf("%c   |C|  %c   |V|  %c   |B|  %c   |N|  %c   |M|  %c   |<|  %c   |>|  %c   |?|  %c%c       %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
	printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 202, 205, 205, 205, 205, 205, 205, 205, 188);
	}


void helpfun ()
{
system("cls");
printf("Program for counting blood cells with microscope.\n");
printf("Counting is done manually by the keyboard of the computer.\n");
printf("The sample count table looks like this:\n");
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 205, 205, 205, 205, 205, 205, 205, 205, 203, 203, 205, 205, 205, 205, 205, 205, 205, 187);
printf("%c        %c        %c        %c        %c        %c        %c        %C        %c%c       %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
printf("%c  BASO. %c EOSIN. %c MYELO. %c JUVEN. %c  STAB. %c  SEG.  %c LYMPH. %c  MONO. %c%c TOTAL %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
printf("%c00000000%c00000000%c00000000%c00000000%c00000000%c00000000%c00000000%c00000000%c%c0000000%c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",204, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 205, 205, 205, 205, 205, 205, 205, 205, 206, 206, 205, 205, 205, 205, 205, 205, 205, 185);
printf("%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c0000000%%%c%c       %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
printf("%c   |C|  %c   |V|  %c   |B|  %c   |N|  %c   |M|  %c   |<|  %c   |>|  %c   |?|  %c%c       %c\n",186, 186, 186, 186, 186, 186, 186, 186, 186, 186, 186);
printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",200, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 205, 205, 205, 205, 205, 205, 205, 205, 202, 202, 205, 205, 205, 205, 205, 205, 205, 188);
printf("For column BASO. press button C; For column EOSIN. press button V; For column MYELO. press button B\n");
printf("For column JUVEN. press button N; For column STAB. press button M; For column SEG. press button <\n");
printf("For column LYMPH. press button >; For column MONO. press button ?\n");
printf("| ! | In order to operate with the program the keyboard language must be set to English.\n");
printf("Special commands are: Button 0 -> Set counter to zero; Button 7 -> Save; Button 9 -> Exit\n");
}




