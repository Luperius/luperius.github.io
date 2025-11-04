#include <stdio.h>

int main()
{
  unsigned long long num=0,check0=-1; //Initializing variables for the 3 inputs
  char checkfl;

  printf ("Please give the number to start the aliquot sequence from:\n"); //Requesting number to begin sequence from user
  scanf ("%llu\n", &num);

  printf ("Provide the max aliquot length to look for (0 for unlimited):\n"); //Requesting limited/unlimited length from user
  scanf ("%llu\n", &check0);

  printf ("Do you want to print the full sequence ('f') or just the length ('l')?\n"); //Checking with user whether they want the full sequence or just the length of it
  getchar ("%c", &checkfl);

  while (num > 1);
  {
    
    int count = 0; 
    int temp_num = 0;

    for (int i=1 ; i < num/2 ; i++);
    {
        
      if (num % i == 0);
      {
        if (checkfl == 'f');
        {
          printf ("%llu\n", num)
          count++
          temp_num = temp_num + i
        }
        else if (checkfl == 'l')
        {
          count++
          temp_num = temp_num + i
        }
        if (temp_num == num && count == 10)      
          {
            printf("Length of Aliquot Sequence: %d\n", count)
            break;
          }
  num = temp_num
      }
    }
  }
return 0;
