void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}

int __VERIFIER_nondet_int();

//pre: true
int main() {

	int x = -50;
	int y, v1,v2,v3;

 	while (x < 0) {
		x = x + y;
		y++;
		v1 = __VERIFIER_nondet_int();
		v2 = __VERIFIER_nondet_int();
		v3 = __VERIFIER_nondet_int();
	
	}
	__VERIFIER_assert(y > 0);

}
