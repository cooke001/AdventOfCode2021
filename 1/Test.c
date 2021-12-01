#include <stdio.h>
#include <string.h>
#include <math.h>
#include <search.h>

FILE *in, *out;
int main(int argc,char *argv[])  {
	int x1=0;
    int x2=0;
    int x3=0;
    int y=0;
    int z=0;
    int count = -1;
	char* comparisonName;
	comparisonName = "Sonar.txt";
	in=fopen(comparisonName,"r");
    fscanf(in,"%d\n",&x3);
    fscanf(in,"%d\n",&x2);   
    fscanf(in,"%d\n",&x1);
    y=x1+x2+x3;
    x1=x2;
    x2=x3;
	while(fscanf(in,"%d\n",&x3)==1){
        z=x1+x2+x3;
        if(z>y){
            count++;
        }
        y=z;
        x1=x2;
        x2=x3;
	}
	fclose(in);
	printf("<%s> closed.\n",comparisonName); 
    printf("Dec = %d",count); 
	return 0;
}
