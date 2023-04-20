#include <stdio.h>
#include <string.h>

int romanToInt(char * s) {
    int i, len, result = 0;
    len = strlen(s);
    
    for(i=0; i<len; i++){
        if(s[i] == 'I'){
            if(s[i+1] == 'V'){
                result += 4;
                i++;
            }
            else if(s[i+1] == 'X'){
                result += 9;
                i++;
            }
            else
                result += 1;
        }
        else if(s[i] == 'V')
            result += 5;
        else if(s[i] == 'X'){
            if(s[i+1] == 'L'){
                result += 40;
                i++;
            }
            else if(s[i+1] == 'C'){
                result += 90;
                i++;
            }
            else
                result += 10;
        }
        else if(s[i] == 'L')
            result += 50;
        else if(s[i] == 'C'){
            if(s[i+1] == 'D'){
                result += 400;
                i++;
            }
            else if(s[i+1] == 'M'){
                result += 900;
                i++;
            }
            else
                result += 100;
        }
        else if(s[i] == 'D')
            result += 500;
        else if(s[i] == 'M')
            result += 1000;
    }
    return result;
}

int main() {
    char romanNum[20];
    printf("Enter a Roman numeral: ");
    scanf("%s", romanNum);
    int result = romanToInt(romanNum);
    printf("The integer value of the Roman numeral is: %d", result);
    return 0;
}
