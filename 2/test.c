#include <stdio.h>
#include <string.h>
#include <math.h>
#include <search.h>

FILE *in;
int main(int argc,char *argv[])  {
	char dir;
    int mag=0;
    int x=0;
    int y=0;
    int z=0;
    int aim = 0;
    char* comparisonName;
	comparisonName = "test.txt";
	in=fopen(comparisonName,"r");
	while(fscanf(in,"%c %d\n",&dir, &mag)>1){
       if(dir==102){ //fwd
           x=x+mag;
           y = y + mag*aim;
       }
       if(dir==117){ //up
           aim=aim-mag;
       }
       if(dir==100){ //down
           aim=aim+mag;
       }

       printf("%d %d\n",dir,mag);
	}
	fclose(in);
	printf("<%s> closed.\n",comparisonName); 
    z = x*y;
    printf("Dec = %d %d %d",x,y,z); 
	return 0;
}
