void __VERIFIER_assert(int cond) {
  if (!(cond)) {
    ERROR: goto ERROR;
  }
  return;
}

int __VERIFIER_nondet_int();

int x[4608];

//pre: true
int main() {
   
	int y;
	int counter = 0;
	int z, v1,v2,v3;

   	if ( 127 < y) return 0;
   	if ( y < 0) return 0;
   	z = y * 36;
   
   	while (counter < 36){

		if(z < 0 || z >= 4608)
			__VERIFIER_assert( 0 == 1 );

      		x[z] = 0;
      		z++;
      		counter++;
  		v1 = __VERIFIER_nondet_int();
  		v2 = __VERIFIER_nondet_int();
  		v3 = __VERIFIER_nondet_int();
   	}

   	return 1;

}
