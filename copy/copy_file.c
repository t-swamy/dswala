#include<stdio.h>
void main(int argc,char *argv[])
{
char c;
FILE *fpt1,*fpt2;
if(argc<3)
{

printf("File name not provided As command line arguments\n");
return;
}
else
{
fpt1=fopen(argv[1],"r");
fpt2=fopen(argv[2],"w");
if(fpt1==NULL)
{
printf("\n File not found");
return;
}
else{
do
{
c=fgetc(fpt1);
fputc(c,fpt2);
}while(c!=EOF);
}
printf("\n Source file copied to target file");
fclose(fpt1);
fclose(fpt2);
}
fpt2=fopen(argv[2],"r");
printf("\n The contents of the file after copying are:\n");
while((c=fgetc(fpt2))!=EOF)
printf("%c",c);

}
