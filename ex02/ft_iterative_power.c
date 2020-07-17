int ft_recursive_power(int nb, int power)
{
  int     n;
  
  if (power == 0)
  return (1);
  
  if (power < 0)
  return (0);
  
  
  while (power > 0 ){
  
  
  n = nb;
    return (n * ft_recursive_power(nb, (power - 1)));
}
  return (nb);
}

