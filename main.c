#include<stdio.h>

#pragma warning( disable : 4996)
int main ()
{
	FILE *fpin,*fpout,*fpout2,*fpout3,*fpout4;
	char c[1000*1000];
	int  i,j,k;
	
	for(j=0;j<1000*1000;j++)
	{
		c[j]='\0';
	}
	

	fpin=fopen("input.png","r");
    	fpout=fopen("output.png","w");
	

    	fseek(fpin,0,2);//将文件指针移到文件末尾, 最后一个参数为0：返回文件开头；1：回到当前位置；2：到文件末尾
	i=ftell(fpin);//获取从文件开头到当前指针所指位置的字节数
	fseek(fpin,0,0);//文件指针返回文件开头
	fread(c,i,1,fpin);//将fpin中的i字节大小的内容复制到char* 类型 的c中
	fwrite(c,i,1,fpout);//将c中的i字节大小的内容复制到fpout中
	
	fclose(fpin);
	fclose(fpout);
}
