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
	

    	fseek(fpin,0,2);//���ļ�ָ���Ƶ��ļ�ĩβ, ���һ������Ϊ0�������ļ���ͷ��1���ص���ǰλ�ã�2�����ļ�ĩβ
	i=ftell(fpin);//��ȡ���ļ���ͷ����ǰָ����ָλ�õ��ֽ���
	fseek(fpin,0,0);//�ļ�ָ�뷵���ļ���ͷ
	fread(c,i,1,fpin);//��fpin�е�i�ֽڴ�С�����ݸ��Ƶ�char* ���� ��c��
	fwrite(c,i,1,fpout);//��c�е�i�ֽڴ�С�����ݸ��Ƶ�fpout��
	
	fclose(fpin);
	fclose(fpout);
}
