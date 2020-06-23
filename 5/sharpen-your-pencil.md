```c
void happy_birthday(turtle *t) {
  (*t).age = (*t).age + 1;
  printf("Happy Birthday %s! You are now %i years old!\n",
      (*t).name, (*t).age);
}
```
