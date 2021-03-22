#include <stdio.h>
#include <stdlib.h>

#define input_buffer 80

// git upload

int verify_input(char *input);
void compress_input(char *input);
float calculate(char *input);

int main(void)    
{
 	int i, j, k;
	char *input;
	
	input = malloc(sizeof(char)*input_buffer);
		
 	printf("Enter calculation:\n");
 	
 	while(1)
 	{
 		fgets(input, input_buffer, stdin);
		if(verify_input(input))
			printf("input ok\n");
		else
			printf("input errors\n");
		
			
		compress_input(input);
 		printf("compressed: %s\n", input);
		calculate(input);
 } 		 
  return 0;
}

int verify_input(char *input)
{
	int i, j;
	int err=0;
	char valid[15] = "0123456789+-*/";
	
	for(i=0; i<input_buffer; i++)
	{
		err = 0;
		if(input[i]=='\n')
		{
			break;
		}
		err = 1;
		for(j=0; j<sizeof(valid)-1; j++)
		{
			if(input[i] == valid[j])
			{
				err = 0;
				break;
			}
		}
		if(err)
		{
			break;
		}
	}
	return (!err);
}


void compress_input(char *input)
{
	int i, place=0;
	
	for(i=0; i<input_buffer-1; i++)
	{
		if(input[i]==' ')
		{
			
		}
		else
		{
			input[place]=input[i];
			place++;
		}
		if(input[i] == '\n')
			break;
	}
	input[place-1] = '\0';
}

float calculate(char *input)
{
	return 5.5;
	
	//
}


