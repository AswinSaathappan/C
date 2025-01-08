#include<stdio.h>
#include<string.h>
int main()
{
	int n,i=0,originalnum,n1,n2,n3;
	printf("\nEnter the number:");
	scanf("%d",&n);
	originalnum=n;
	while(n!=0)
	{
		n1=n%10;
	    n=n/10;
		i++;
	}
	printf("\nNo of digits: %d",i);
	n=originalnum;
	if(i<3)
	{
		printf("\n\nFurther actions can't be done");
	}
	else
	{
		n2=n*2;
		n3=n*3;
		printf("\n%d //number multipled by 2",n2);
		printf("\n%d //number multiplied by 3",n3);
		
		// Convert numbers to strings
        char str_n[20], str_n2[20], str_n3[20];
        sprintf(str_n, "%d", n);
        sprintf(str_n2, "%d", n2);
        sprintf(str_n3, "%d", n3);
        
        // Concatenate the strings
        char concatenated[60]; // Assuming concatenated string won't exceed 60 characters
        strcpy(concatenated, str_n);
        strcat(concatenated, str_n2);
        strcat(concatenated, str_n3);
        
        printf("\nConcatenated number: %s", concatenated);
        
        
        // Fascinating concept
        int len = strlen(concatenated);
        int fascinating = 1; // Assume it's fascinating until proven otherwise
        for(int j = 0; j < i; j++) {
            char cnst = concatenated[j];
            int found = 0; // Flag to indicate if a digit is found
            for(int k = i; k < len; k++) {
                if(concatenated[k] == cnst) {
                    found = 1; // Digit is found
                    break;
                }
            }
            if(found) {
                fascinating = 0; // If digit is not found, not fascinating
                break;
            }
        }

        if(fascinating) {
            printf("\n%d is a fascinating number", n);
        }
        else {
            printf("\n%d is not a fascinating number", n);
        }
	}
}
