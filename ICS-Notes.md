# ICS Notes

$$
\def\vx{\mathbf{x}}
$$

## 02-03-bits-ints

Binary to Unsigned: $\vx \to \sum_{i = 0}^{w - 1} x_i 2^i$.

Binary to Two's Complement: $\vx \to -x_{w - 1}2^{w - 1} + \sum_{i = 0}^{w - 2} x_i 2^i$. （补码）

上面两个 mapping 都是可逆的。

If there is a mix of unsigned and signed in single expression, **signed values implicitly cast to unsigned**.

Expanding ($w$-bit to $(w + k)$-bit): make $k$ copies of sign bit (sign extension).

TAdd/TMult and UAdd/UMult have Identical Bit-Level Behavior.

**Proper way to use unsigned as loop index**:

```c
size_t i; // usize in rust
for (i = cnt - 2; i < cnt; i--)
    a[i] += a[i+1];
```

即使 cnt 是有符号并且 $<0$ 也 work，因为做比较的时候都会转成 unsigned.

**Byte Ordering**: how are the bytes within a mult-byte word ordered in memory.

- Little Endian: x86, ARM processors running Android, iOS, and Windows. Least significant byte has lowest address.

事实上 $\neg x + 1 = -x$ 应该视作 two's complement 的一个性质，而不是补码的定义。

有符号整数的右移可以视为向零取整。