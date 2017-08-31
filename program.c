



#include<stdio.h>
#include<string.h>

//generates 1000 files

char gener_file_name[sizeof "file100.txt"];
int x;

int create_file(char *FILE_NAME)
        {

          FILE* file_ptr = fopen(FILE_NAME, "w");
          fclose(file_ptr);
          return 0;
        }


int main()
	{
	  for(x = 0; x <= 1000;  x++)
	    {
	     	sprintf(&gener_file_name, "file%03d.txt", x);
            create_file(gener_file_name);
	    }
	}

