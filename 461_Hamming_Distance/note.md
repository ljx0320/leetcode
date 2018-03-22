## Even the naivew solution needs practice!!!

### Naive solution

**Understand the meaning of binary numbers: how we convert decimal to binary?**
Usually we use %2 and /2


### Best solution

**Bit manipulation!**
This is almost always encountered in interview!
[6 bit manipulation operators](http://www.learncpp.com/cpp-tutorial/38-bitwise-operators/)
Suppose we have ```n = 10101``` and ```dist = 0```.
- Before we go into the while loop, ```n = 10101```, ```dist = 0```.
- Loop 2. ```dist = 2```, ```n =10100 & 10011 = 10000```.
- Loop 3. ```dist = 3```, ```n =10000 & (0)1111 = 0```.
- Loop ends. ```dist = 3```.

Conclusion: ```n & (n-1)``` converts the right most ```1``` to ```0```.
