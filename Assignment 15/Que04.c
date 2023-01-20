// 4. Write a function to rotate an array by n position in d direction. The d is an indicative value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) 

#include<stdio.h>

void rotateLeft(int a[], int length){
    int i,temp;
    temp = a[0];
    for(i=0;i<length;i++){
        a[i] = a[i+1];
    }
    a[length-1] = temp;
}

void rotateRight(int a[], int length){
    int i,temp;
    temp = a[length-1];
    for(i=length-1;i>0;i--){
        a[i] = a[i-1];
    }
    a[0] = temp;
}

int main(){
    int length,pos,dir;

    printf("Enter the lenght of array\n");
    scanf("%d",&length);

    int a[length];

    printf("Enter %d Elements\n",length);
    for(int i=0;i<length;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the Number of position to rotate\n");
    scanf("%d",&pos);

    printf("Enter Direction to Rotate \nPress 1 for - Left\nPress 2 for - Right\n");
    scanf("%d",&dir);


    switch (dir)
    {
    case 1:
        /* Left */
        for(int i=0; i<pos;i++)
            rotateLeft(a,length);
        
        printf("Rotated array is ---\n");
        
        for(int j=0;j<length;j++){
            printf("%d ",a[j]);
        }
        break;
    case 2:
        /* Right Rotation */
         for(int i=0; i<pos;i++)
            rotateRight(a,length);
        
        printf("Rotated array is ---\n");
        
        for(int j=0;j<length;j++){
            printf("%d ",a[j]);
        }
        break;
    
    default:
        printf("Please Enter Valid Choice");
        break;
    }


    return 0;
}