let rec factorial = (n: int) : int => n <= 0 ? 1 : n * factorial(n - 1);
