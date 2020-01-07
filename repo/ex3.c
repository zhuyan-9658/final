#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    int i=1;int j=0;
    int m=0; 
    double a[100];
     if(argc==1){
        printf("The program needs at least one integer parameter to run!\n");
     }
    else{
    for(i=1;i<argc;i++,j++){
        if(*argv[i]>'0'&&*argv[i]<'9')
        {
           a[j]=atof(argv[i]);
           }
            else{
             printf("The parameter has to be an integer format!");
             return 0;
           }
    }
    double min =a[0];
    for(m=0;m<argc-2;m++){
        if(min>a[m+1]){
            min=a[m+1];
        }
    }
    printf("Min parameter is %g\n",min);
    return 0;
    }
}