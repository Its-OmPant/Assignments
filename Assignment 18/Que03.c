// 3.Write a function to compare two strings. 

#include<stdio.h>
#include<string.h>

int StringCompare(char string1[], char string2[]){
    int i,x=0;

    for(i=0; string1[i] != '\0';i++){
        if(string1[i] == string2[i]){
            x = 0;
        }
        else if(string1[i] > string2[i]){
            x = 1;
        }
        else{
            x = -1;
        }
    }

    return x;
}

int main(){
    int x;
    char str1[50], str2[50];

    printf("Enter 1st String\n");
    fgets(str1,50,stdin);
    str1[strlen(str1)-1] = '\0';

    printf("Enter 2nd String\n");
    fgets(str2,50,stdin);
    str2[strlen(str2)-1] = '\0';

    x = StringCompare(str1,str2);

    if(x ==0 )
        printf("Strings are Same");
    else if(x >0)
        printf("%s is Greater than %s",str1,str2);
    else    
        printf("%s is Greater than %s",str2,str1);

    return 0;
}