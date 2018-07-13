void *ft_malloc(int size);

/*
int main()
{
  printf("%s \t", ft_itoa(3456789));
  printf("%s \t", ft_itoa(345678));
  printf("%s \t",ft_itoa(34567));
  printf("%s \t",  ft_itoa(3456));
  printf("%s \t",  ft_itoa(345));
  printf("%s \t",  ft_itoa(35));
  printf("%s \t",  ft_itoa(0));

  return (0);
}
*/
char *ft_itoa(int n)
{
  int size = 1;
  int div = 10;

  char *nb;
  while (++size && n >= div)
    div *= 10;
  nb = (char *)ft_malloc(size);
  nb[--size] = 0;
  while (--size >= 0)
    {
      nb[size] = (n % 10) + '0';
      n /= 10;
    }
  return (nb);
}

