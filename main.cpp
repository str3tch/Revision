#include <stdio>

int main()
{

  printf("Hello %s\n", "World");

  return 0;
}

// reverse a string
const char *mystring = "hello world";

char *reverse(const char *input)
{

  char *output = 0;

  if (input)
  {
    int i = 0;
    int x = strlen(input + 1);
    output = new char[x];
    while (input[i] != 0)
    {
      output[x] = input[i];
      i++;
      x--;
    }
  }

  return output;
}
