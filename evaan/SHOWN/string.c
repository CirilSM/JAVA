#include<stdio.h>
#include<string.h>
void main()
{
	char s1[50],s2[50],ss[30],str[20];
	int ch;
	printf("1:CONCATENATE.\n2:DELETE A SUBSTRING");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("ENTER FIRST STRING:\n");
		scanf("%s",s1);
		printf("ENTER THE SECOND STRING:\n");
		scanf("%s",s2);
		strcat(s1,s2);
		puts(s1);
	}
	else
	{
		char text[200], new_text[200]; 
      		int i=0,j=0,found=0,k,n=0,c=0;  
      		printf("\nENTER THE STRING");
      		scanf("%s",text); 
      		printf("\nENTER SUBSTRING TO BE DELETED(WITHOUT SPACE)"); 
      		scanf("%s",str);  
   		while(text[i]!='\0') 
   		{
   			j=0,found=0,k=i; 
             		while (text[k]==str[j]&&str[j]!='\0') 
              		{ 
              			k++; 
              			j++; 
             		} 
                 	if(str[j]=='\0') 
                 	{ 
                        	c=k; 
                 	} 
                        new_text[n]=text[c]; 
                        i++; 
                        c++; 
                        n++; 
 	  	} 
		str[n]='\0'; 
                printf("\nTHE MODIFIED STRING IS:\n"); 
                puts(new_text); 
	}
}
