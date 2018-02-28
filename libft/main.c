void test_ft_memccpy();

int main(int argc, char **argv)
{
  printf("atoi :%d:\n", ft_atoi("305"));
  printf("itoa :%s\n", ft_itoa(305));

  test_malloc();
  test_ft_memccpy();
  test_ft_memchr();
  test_ft_memcmp();
}

void test_ft_bzero()
{
  char str[7] = "123456\0";

  printf("ft_bzero :%d:%d:%d:%d:%d:%d\n", ft_bzero(str, 7));
}

void test_ft_memccpy()
{
  char str[10] = "salut gen\0";
  char cp[6];

  printf("ft_memccpy :%s:\n", (char *)ft_memccpy(cp, str, ' ', 10));
  printf("ft_memccpy :%s:\n:%s:\n", cp, str);
}

void test_ft_memchr()
{
  char str[14] = "perlin pinpin\0";

  printf("ft_memchr :%s:\n", ft_memchr(str, ' ', 14));
}
