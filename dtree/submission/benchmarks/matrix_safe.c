void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}
int __VERIFIER_nondet_int();

main()
{
  unsigned int N_LIN=1;
  unsigned int N_COL=1;
  unsigned int j,k;
  int matriz[N_COL][N_LIN], maior;

  maior = __VERIFIER_nondet_int();
  for(j=0;j<N_COL;j++)
    for(k=0;k<N_LIN;k++)
    {
       __VERIFIER_assert(matriz[0][0]<=maior || (j == 0 && k == 0));
       matriz[j][k] = __VERIFIER_nondet_int();

       if(matriz[j][k]>=maior)
          maior = matriz[j][k];
    }

  if(!(matriz[0][0]<=maior))
  {
    ERROR:
    goto ERROR;
  }
}
