void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}
//#define a (2)
#define a (1)
extern int __VERIFIER_nondet_int();
int main() { 
  int i, n=__VERIFIER_nondet_int(), sn=0;
  int v1, v2, v3;
  for(i=1; i<=n; i++) {
    sn = sn + a;
    v1 = __VERIFIER_nondet_int();
    v2 = __VERIFIER_nondet_int();
    v3 = __VERIFIER_nondet_int();

  }
  __VERIFIER_assert(sn==n*a || sn == 0);
}
