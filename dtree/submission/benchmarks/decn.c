void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}

int __VERIFIER_nondet_int();

main()
{
  int x, m, N;
  N = __VERIFIER_nondet_int();
  if (N < 0)
    return;
  
  x = N;
  while(x > 0)
  {
    x = x - 1;
  }
  __VERIFIER_assert(x == 0);    
  //__VERIFIER_assert(N < 0 || x == 0);    
}

