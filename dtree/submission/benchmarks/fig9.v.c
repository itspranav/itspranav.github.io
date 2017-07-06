void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}

int __VERIFIER_nondet_int();


//pre: true
int main() {

	int x, y, v1,v2,v3;
	x = 0;
	y = 0;

	while(y >= 0) {

		y = y + x;
		v1 = __VERIFIER_nondet_int();
		v2 = __VERIFIER_nondet_int();
		v3 = __VERIFIER_nondet_int();
	
	}

	__VERIFIER_assert(0 == 1);

}
