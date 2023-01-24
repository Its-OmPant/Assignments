// 9. Write a function to reverse a string word wise. (For example if the given string is “iNeuron Education Services” then the resulting string should be “Services Education iNeuron” ) 

#include<stdio.h>
#include<string.h>

void reverse(char string[],int begin, int end){
    char temp;
    int i,j;
    i = begin;
    j = end;

    for(i; i<=j; i++,j--){
        temp = string[i];
        string[i] = string[j];
        string[j] = temp;
    }
}

void revStringWords(char string[]){    
    int i, j, x = 0, y = strlen(string)-1;

    // Reversing each words
    for(i = 0,j = 0 ; string[i] != '\0' ; j++,i=j){
        while(string[j] != ' '){
            if(string[j] == '\0'){
                break;
            }
            j++;
        }

        reverse(string,i,j-1); 
    }

    //reversing whole string 
    reverse(string,x,y);

    printf("reversed String : %s\n",string);

}

int main(){
    char string[15];

    printf("Enter a string\n");
    fgets(string,100,stdin);
    string[strlen(string)-1] = '\0';

    revStringWords(string);
    return 0;
}

