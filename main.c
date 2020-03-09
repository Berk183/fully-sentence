#include <stdio.h>
#include <stdlib.h>
#define SIZE 101

int main()
{
    int i,a,count=0,max1=0,max2=0,letter1,letter2;
    char sentence[101];
    char alphabet1[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','r','s','t','u','v','y','z','w','x','q'};
    char alphabet2[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','R','S','T','U','V','Y','Z','W','X','Q'};
    int counter1[26]={0};
    int counter2[26]={0};

    printf("Enter a string with max 100 characters:");
    fgets(sentence,SIZE,stdin);

    for(i=0;i<=SIZE && sentence[i]!='\0';i++){
        for(a=0;a<=25;a++){
            if(sentence[i]==alphabet1[a]){
                counter1[a]++;
            }
            if(sentence[i]==alphabet2[a]){
                counter2[a]++;
            }
        }
   }
   for(a=0;a<=25;a++){
    if(counter1[a]>=1 || counter2[a]>=1){
        count++;
    }
   }
   if(count==26){
    printf("\nThe sentence is fully");
   }
   else{
    printf("\nThe sentence is not fully");
   }

   for(i=0;i<=25;i++){
        if(counter1[i]>max1){
            max1=counter1[i];
        }
        if(counter2[i]>max2){
            max2=counter2[i];
        }
   }
    for(i=0;i<=25;i++){
        if(counter1[i]==max1){
            letter1=i;
        }
        if(counter2[i]==max2){
            letter2=i;
        }
    }


   if(max1>max2){
    printf("\nMost occured letter is %c\n",alphabet1[letter1]);
   }
   else if(max2>max1){
    printf("\nMost occured letter is %c\n",alphabet2[letter2]);
   }
   else if(max1=max2){
    printf("\nMost occured letters are %c and %c\n",alphabet1[letter1],alphabet2[letter2]);
   }



    return 0;
}
