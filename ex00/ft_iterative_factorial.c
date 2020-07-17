int ft_iterative_factorial(int nb)
{
  int number;
  int i;

  i = 1;
  number = 1;

  if (nb > 12 || nb < 0)
  return (0);



  if (nb == 1 || nb == 0)
    return (1);

      while (nb > i )
      {
          number = nb * number;
          nb--;
      }

return (number);
}
