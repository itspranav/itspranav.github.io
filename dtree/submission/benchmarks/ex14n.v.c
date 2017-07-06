void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}

int __VERIFIER_nondet_int();

int main() {

    	int x,y,N, v1, v2, v3;
   	int *a; 
   	x=1;
        N = __VERIFIER_nondet_int();
   	while (x <= N){
      		y=N-x;

		if(y < 0 || y >= N)
			__VERIFIER_assert(0 == 1);

      		a[y] = -1;
      		x++;
		v1 = __VERIFIER_nondet_int();
		v2 = __VERIFIER_nondet_int();
		v3 = __VERIFIER_nondet_int();
	
   	}

   	return 1;

}
