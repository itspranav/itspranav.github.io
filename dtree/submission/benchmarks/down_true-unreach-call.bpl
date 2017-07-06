function {:existential true} b0(i: int, k: int, n: int) : bool;
function {:existential true} b1(i: int, j: int, k: int, n: int) : bool;


procedure main() {
  var n: int;
  var k: int;
  var i: int;
  var j: int;

  k := 0;
  i := 0;

  while (i < n)
  invariant b0(i,k,n); 
  {
	i := i + 1;
	k := k + 1;
  }

  j := n;
  while (j > 0) 
  invariant b1(i,j,k,n); 
  {
	assert k > 0;
	j := j - 1;
	k := k - 1;
  }
}
