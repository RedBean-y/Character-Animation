#include <stdio.h> 
#include <conio.h> 
#include <time.h>  
#include <windows.h> 
#include <stdlib.h> 
void gotoxy(int x, int y); 
int main()
{
	system("color f0");
    long i;
	char FileName[100], hi[254400];/*这里是字符数组,用来存储从文件打开的字符串*/
	FILE *in;
	//getch(); 
    printf("3\n");
    Sleep(1000);
    printf("2\n");
    Sleep(1000);
    printf("1\n");
    Sleep(1000);
    printf("start/n");
    
    
	for(i=1;i<=2122;i++)
	{
		sprintf(FileName,"C:\\Users\\Dell\\Desktop\\字符动画\\2\\vptxt\\ASCII(%ld).txt",i);/*文件的地址地址自己修改,文件名按规律写*/
        
	in=fopen(FileName,"r");
	fread(hi,1,25440,in);//这是我一个TXT文件里的字符串. 
	printf("%s\n%d",hi,i);
	Sleep(38);//等待38毫秒执行
	gotoxy(1,1);fclose(in); 
	}
} 
void gotoxy(int x, int y) //这个函数是将光标位置移动到坐标x,y 
	{
		COORD pos;pos.X = x - 1;pos.Y = y - 1;
        SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	}