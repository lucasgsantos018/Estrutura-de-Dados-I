# ifndef fib_h
# define fib_h

typedef struct{

  int i;
  long int resultado;
  long int chamadas;
  
} TADfib;

/*colocar o tipo de retorno adequado para grandes numeros*/ 
long int fibonacci(int n, TADfib *f);

# endif