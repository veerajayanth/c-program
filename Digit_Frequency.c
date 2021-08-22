/*Given a string, , consisting of alphabets and digits, find the frequency of each digit in the given string.
*Sample Input 0
*a11472o5t6
*Sample Output 0
*0 2 1 0 1 1 1 1 0 0 
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ \
    char s[1000];
    int a[10]={0};
    scanf("%s",s);
    // printf("%s\n",s);   
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>=48 || s[i]<=57){
            
            a[s[i]-48]++;
        }
    }
    for (int i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
