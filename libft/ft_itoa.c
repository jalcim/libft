void *ft_malloc(int size);
void ft_bzero(void *src, int size);

char *ft_itoa(int n)
{
  int size = 1;
  int div = 10;

  char *nb;
  while (n >= div)
    {
      size++;
      div *= 10;
    }
  nb = (char *)ft_malloc(size);
  ft_bzero(nb, size);
  while (--size >= 0)
    {
      nb[size] = (n % 10) + '0';
      n /= 10;
    }
  return (nb);
}
