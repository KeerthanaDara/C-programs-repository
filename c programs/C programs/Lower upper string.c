#include<stdio.h>
#include<ctype.h>
int main()
{
	int i=0;
	char str1[20];
	printf("Enter Upper case String:%s\n",str1);
	gets(str1);
	for(i=0;str1[i]!='\0';i++)
	{
		str1[i]=tolower(str1[i]);
	}
	printf("Lowercase string is:%s\n",str1);
	char str2[20];
	 printf("Enter Lower case string:\n",str2);
	 gets(str2);
	 for(i=0;str2[i]!='\0';i++)
	 {
	  str2[i]=toupper(str2[i]);
	 }
	 printf("upper string is:%s\n",str2);
	 char str[]="This is a Sample Sentence. It contains Multiple Sentences!";
	 printf("Original Sentence:%s\n",str);
	 while(str[i]!='\0')
	 {
	 	if(i==0||(i>0 && (str[i-1]=='.'||str[i-1]=='?'||str[i-1]=='!')))
	 	{
		 for(i=0;str[i]!='\0';i++)	
		 {
		 	str[i]=toupper(str[i]);
		 }
		}
		else
		{
		   	  for(i=0;str[i]!='\0';i++)
		   	  {
		   	  	str[i]=tolower(str[i]);
			  }
		}
		i++;
	 }
	 printf("Sentence Case:%s\n",str);
	 //4.Toggle case
	 char str3[]="This is a Sample Sentence. It contains Multiple Sentences!";
	 printf("Original Sentence((Toggle Case)):%s\n",str);
	 for(i=0;str3[i]!='\0';i++)
	 {
	 	if(islower(str3[i]))
	 	{
		   str3[i]=toupper(str3[i]);
		} else if(isupper(str3[i]))
	      {
	      	str3[i]=tolower(str3[i]);
		}
	 }
	 printf("Toggle Case:%s\n",str3);
	 return 0;
}
