```c
y = x - y;
```

Output: `00 11 21 32 42 `.

```c
y = y + x;
```

Output: `00 11 23 36 410 `.

```c
y = y + 2;

if (y > 4)
  y = y - 1;
```

Output: `02 14 25 36 47 `.

```c
x = x + 1;
y = y + x;
```

Output: `11 34 59 `.

```c
if (y < 5) {
  x = x + 1;
  if (y < 3)
    x = x - 1;
}
y = y + 2;
```
Output: `02 14 36 48 `.
