Correct solution:

```c
int main() {
  char search_for[80];
  printf("Search for: ");
  scanf("%79s", search_for);
  find_track(search_for);

  return 0;
}
```
