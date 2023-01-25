// 5. Suppose we have a list of email addresses, check whether all email addresses have ‘@’ in it. Print the odd email out. 

#include<stdio.h>
#include<string.h>

int main(){
    char emailList[][50] = {"abc@gamil.com","xyz@ad.com","hgsy.abc","pqrs@tq", "abcd@yx.edu","your@name.com", "po@drsingh1","xys#23.com"};

    int i;

    printf("Odd Emails from the List are:\n\n");
    for(i = 0;i<8;i++){
        if( strchr(emailList[i],'@') && strchr(emailList[i], '.')){
            //do nothing
        }
        else{
            printf("%s \n",emailList[i]);
        }
    }

    return 0;

}