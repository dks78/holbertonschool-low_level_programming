#include <stdio.h>

int main(int argc, char *argv[])
{
    int count;
    printf("%s\n", argv[0]);
  if (argc > 1) 
    { 
      for (count = 1; count < argc; count++) 
	{
	printf("%s\n", argv[count]); /*va affichez tous les arguments qu'on lui donne */
	} 
} 
  return 0; 
}

