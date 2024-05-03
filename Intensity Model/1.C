#include<stdio.h>
#include <stdlib.h>
int main()
{
FILE *fp; /* file pointer*/char
fName[20];
printf("\nEnter file name to create :");
scanf("%s",fName);
fp=fopen(fName,"w");

if(fp==NULL)
{
printf("File does not created!!!");exit(0);
}
printf("File created successfully.");

putc('V',fp);
putc('I',fp);
putc('R',fp);
putc('A',fp);
putc('J',fp);
printf("\nData written successfully.");
fclose(fp);

fp=fopen(fName,"r");
if(fp==NULL)
{
printf("\nCan't open file!!!");
exit(0);
}
printf("Contents of file is :\n");
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
printf("%c",getc(fp));
fclose(fp);
return 0;
}
