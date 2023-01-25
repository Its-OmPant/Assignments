// 8. Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words. 
// (Example : s = {“the”,”quick”,”brown”,”fox”,”quick”} 
// word1 = “the”, word2 = “fox”, OUTPUT : 2 ) 

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int shortestDistance(char list[][20], char w1[], char w2[]){
    int d1 = -1, d2 = -1;
    int ans = 99999;

    for(int i=0;i<5;i++){
        if(strcmp(list[i],w1) == 0)
            d1 = i;
        if(strcmp(list[i],w2) == 0)
            d2 = i;
        if(d1 != -1 && d2 != -1)
            ans = (ans < abs(d1 - d2))? ans: abs(d1 - d2);
    }
    return ans;
}

int main(){
    char list[][20] =  {"the","quick","brown","fox","quick"};
    char word1[20],word2[20];

    printf("Enter two words from list to find distance\n");
    gets(word1);
    gets(word2);

    printf("Distance: %d",shortestDistance(list,word1,word2));
    return 0;
}