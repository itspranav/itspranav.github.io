void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}

int __VERIFIER_nondet_int();

int main() {
   
	int a[5];
	int len = 0;
	int i, N;
	int input = __VERIFIER_nondet_int();

        if (N <= 0)
    	    return;

	while ( input ) {

		if (len == N)
			len = 0;

		if (len < 0 || len >= N+1)
			__VERIFIER_assert( 0 == 1);

		len++;

		input = __VERIFIER_nondet_int();
	}

   	return 1;

}

