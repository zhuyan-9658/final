#include<stdio.h>
#include<string.h>
void reverse(char s[],int i, int j){
    int m;
    int n;
    n = j-(i + 1);
    if(i<n){
        m=s[i];
        s[i]=s[n];
        s[n]=n;
        reverse(s,++i,j);
    }
}