# strlcat()
<br>

## declaration
```c
strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
```
---

## return value

total `length` of the `string` it `tried` to `create`.  
initial length of dst plus the length of src.

---

## what is does

appends string src to the end of dst.  It will append at most `dstsize - strlen(dst) - 1 characters.`  
It will then NUL-terminate, unless dstsize is 0 or the original dst string was longer than dstsize.*1  

---

## notes

- unless it does not abort during execution,  
`it will always return strlen(dst) + strlen(src)`
- If the src and dst strings overlap, the behavior is undefined.
- *1 In practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string.
---

## behaviors (what ifs)

- **dstsize is greater than the length of array dst**  

throws compilation error;  
`will always overflow destination buffer [-Werror,-Wbuiltin-memcpy-chk-size]`

---

## my implementation

```c

```
---

## test program

```c

```
